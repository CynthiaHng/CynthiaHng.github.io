// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley
// $Id: ConstantSpeed.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// --- LCD Setup ---
LiquidCrystal_I2C lcd(0x27, 16, 2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

// --- Stepper Setup ---
AccelStepper stepper(AccelStepper::DRIVER, 2, 3);  // step pin, dir pin

// --- Adjustable Settings ---
double flow_rate = 5.0;     // mL/min [0.1 to 5.0]
double syringe_vol = 10.0;  // mL [10.0 or 20.0]
// double syringe_vol = 20.0;        // mL [10.0 or 20.0]
double adj_speed = 1000;  // steps/second [0 to 1000]

// --- Physical Constants ---
const float small_diameter = 14.7;   // mm [10 mL syringe internal diameter]
const float big_diameter = 18.9;     // mm [20 mL syringe internal diameter]
const float lead_screw_pitch = 2.0;  // mm/rev [8.0 or 2.5]
const float steps_per_rev = 1600;    // steps/rev [microstepping]

// --- Pin Assignments ---
const int run_button = 4;
const int limit_switch = 5;
const int pot_pin = A0;
const int backwards_button = 12;
const int forwards_button = 13;

const int red_LED = 9;
const int green_LED = 10;
const int blue_LED = 11;

// --- State Variables ---
bool isRunning = false;
bool hasLiquid = true;
bool lastRunState = HIGH;
bool wasRunning = false;

// --- Calculation Variables ---
double total_dispense_time;
double lastRunningTime = 0;
double totalRunTime = 0.0;

double lastDisplayUpdate = 0;
const double displayInterval = 2000;


// --- Setup ---
void setup() {
  total_dispense_time = syringe_vol / flow_rate;

  stepper.setMaxSpeed(1000);

  // button/switch configurations
  pinMode(run_button, INPUT_PULLUP);
  pinMode(limit_switch, INPUT_PULLUP);
  pinMode(backwards_button, INPUT_PULLUP);
  pinMode(forwards_button, INPUT_PULLUP);
  pinMode(pot_pin, INPUT);

  // LED configurations
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);

  // LCD initialization
  lcd.init();
  lcd.clear();
  lcd.backlight();
}

// --- Loop ---
void loop() {
  // Read potentiometer and map to flow rate
  int potValue = analogRead(pot_pin);
  flow_rate = mapFloat(potValue, 0, 1023, 0.1, 5.0);
  total_dispense_time = syringe_vol / flow_rate;

  // Stepper speed calculations
  float diameter = (syringe_vol == 10 ? small_diameter : big_diameter);
  float radius = diameter / 2.0;                                    // mm
  float area = 3.14159 * radius * radius;                           // mm^2
  float displacement_per_rev = area * lead_screw_pitch;             // mm^3
  float vol_per_step = displacement_per_rev / steps_per_rev;        // mm^3/step
  float steps_per_second = (flow_rate * 1000) / vol_per_step / 60;  // steps/sec

  // Read button/switch states
  bool runState = digitalRead(run_button);
  bool switchState = digitalRead(limit_switch);
  bool backwardsState = digitalRead(backwards_button);
  bool forwardsState = digitalRead(forwards_button);

  // Checks liquid and motor status
  hasLiquid = (switchState == LOW);
  isRunning = (hasLiquid ? (runState == LOW) : false);

  // Syringe swap
  if (forwardsState == LOW && backwardsState == LOW) {  // both pressed
    syringe_vol = (syringe_vol == 10.0 ? 20.0 : 10.0);
    swapSyringe(syringe_vol);
  }

  if (backwardsState == LOW) {  // backwards pressed
    stepper.setSpeed(-1000);
    stepper.runSpeed();
    resetTime();
  } else if (forwardsState == LOW) {  // forwards pressed
    stepper.setSpeed(1000);
    stepper.runSpeed();
    resetTime();
  }

  // Motor control
  if (hasLiquid) {
    if (isRunning) {
      stepper.setSpeed(steps_per_second);
      stepper.runSpeed();
    } else {
      stepper.setSpeed(0);
    }
  }

  // LED status
  if (!hasLiquid) {
    setLEDs(HIGH, LOW, LOW);  // RED - out of liquid
  } else if (runState == LOW) {
    setLEDs(LOW, HIGH, LOW);  // GREEN - running
  } else {
    setLEDs(HIGH, HIGH, LOW);  // YELLOW - paused
  }

  lastRunState = runState;


  if (millis() - lastDisplayUpdate >= displayInterval) {
    lastDisplayUpdate = millis();
    displayTime(hasLiquid);
  }
}

// --- Helper Functions ---
void swapSyringe(double newVol) {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Syringe Swapped");
  lcd.setCursor(0, 1);
  lcd.print(newVol);
}

void setLEDs(bool redOn, bool greenOn, bool blueOn) {
  digitalWrite(red_LED, redOn ? HIGH : LOW);
  digitalWrite(green_LED, greenOn ? HIGH : LOW);
  digitalWrite(blue_LED, blueOn ? HIGH : LOW);
}

void setLCD(double flow, int seconds) {
  lcd.setCursor(0, 0);
  lcd.print("Flow: ");
  lcd.print(flow);
  lcd.print(" mL/m   ");

  lcd.setCursor(0, 1);
  lcd.print("Time: ");
  lcd.print(seconds);
  lcd.print(" sec    ");
}

void displayTime(bool hasLiquid) {
  double currentElapsed = millis();

  if (isRunning) {
    if (!wasRunning) {
      lastRunningTime = currentElapsed;
    } else {
      totalRunTime += (currentElapsed - lastRunningTime) / 1000.0;  // seconds
      lastRunningTime = currentElapsed;
    }
  } else if (wasRunning) {
    totalRunTime += (currentElapsed - lastRunningTime) / 1000.0;
  }

  int secondsLeft = max(0, (int)(total_dispense_time * 60 - totalRunTime));

  setLCD(flow_rate, hasLiquid ? secondsLeft : 0);

  wasRunning = isRunning;
}

void resetTime() {
  total_dispense_time = syringe_vol / flow_rate;
  totalRunTime = 0.0;
  lastRunningTime = millis();
}

float mapFloat(long x, long in_min, long in_max, float out_min, float out_max) {
  return (float)(x - in_min) * (out_max - out_min) / (float)(in_max - in_min) + out_min;
}