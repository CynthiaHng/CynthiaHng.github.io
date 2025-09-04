---
title: "3D Printed Syringe Pump"
excerpt: "DIY Syringe Pump capable of dispensing 1-10 uL/min of flow rate with adjustable interface"
header:
  image: /assets/img/Syringe1.jpeg
  teaser: /assets/img/Syringe1.jpeg
gallery:
  - image_path: /assets/img/Syringe1.jpeg
  - image_path: /assets/img/Syringe2.jpeg
  - image_path: /assets/img/Syringe3.jpeg
  - image_path: /assets/img/Syringe4.jpeg
  - image_path: /assets/img/Syringe5.jpeg
  - image_path: /assets/img/Syringe6.jpeg
  - image_path: /assets/img/Syringe7.jpeg
  - image_path: /assets/img/Syringe8.jpeg
  - image_path:
   
---

# Features

* Pump is driven by a stepper motor coupled to a lead screw.
* Flow rate of the pump (mL/min) can easily be set in the Arduino program (i.e., one
global variable for flow rate and one for syringe pump diameter). Commanded flow rate
may be a decimal (e.g., 0.6 mL/min)
* The syringe pump is compatible with 20 mL and 10 mL syringe sizes and is
capable of driving the plunger to the full extent of each syringe until it is completely
emptied.
* Has LED that is green when running, yellow when paused, and red when out of liquid.
* One latching button to start and pause the motion of the pump.
* A switch which stops the motion when the plunger has reached its limit (i.e., there is no
more liquid left in the pump).
* Two additional monetary buttons that move the motor clockwise and counterclockwise
to be able to set the spacing of the plunger holder when loading the syringe without
having to move the lead screw with your fingers
* Controls the flowrate of the syringe pump by increments of 0.1 mL/min starting at 0
mL/min with a 10k Ohm potentiometer (supplied). The flowrate must be displayed in
the serial monitor of the Arduino IDE and should update as the potentiometer is turned.
Be careful not to write to the serial monitor too often as this can affect speed. (+5%)
* Incorporates a LCD display to show the flow rate and time remaining until
the syringe pump is empty

# Materials and Parts Needed

| Off the Shelf                                                                 | 3D Printed                  |
| ----------------------------------------------------------------------------- | --------------------------- |
| 250 mm lead screw with 2 mm pitch and 2 mm lead (x1)                          | Motor Backplate             |
| 250 mm lead screw with 2 mm pitch and 8 mm lead (x1)                          | Carriage                    |
| 1/4” x 8mm flexible coupling (x1)                                             | Syringe End Support         |
| 200 mm linear rod with 8 mm diameter (x2)                                     | End Support                 |
| LM8UU linear bearing for 8 mm diameter rod (x2)                               | Enclosure Base for Arduino |
| 2040 aluminum extrusion 1’ length (x1)                                        | Enclosure Top               |
| Nema 17 stepper motor (x1)                                                    | Enclosure Lid               |
| MEAN WELL RQ-65D AC-DC power supply quad output 5V 12V 24V 12V 4 amp (x1)     | Potentiometer Adapter       |
| Arduino Uno (x1)                                                              |                             |
| A4988 stepper driver (x1)                                                     |                             |
| Small breadboard (x1)                                                         |                             |
| Panel mount latching push buttons (on/off) (x1)                               |                             |
| Panel mount momentary push buttons (x1)                                       |                             |
| Limit switch (x1)                                                             |                             |
| RGB common cathode LED (x3)                                                   |                             |


# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH286ddQT78850c0d8a4257dd1c1c5818cd6?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Arduino Code
View Code Here: https://github.com/CynthiaHng/CynthiaHng.github.io/blob/main/assets/img/Syringe_Pump_Code_V6.ino

{% include gallery caption="DIY Syringe Pump" %}
