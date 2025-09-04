---
title: "3D Printed Syringe Pump"
excerpt: "DIY Syringe Pump capable of dispensing 1-10 uL/min of flow rate with adjustable interface"
header:
  image: /assets/img/LF3DP-Banner-2.jpg
  teaser: /assets/img/Large-Format-3D-Printer-Thumbnail.png
gallery:
  - image_path: assets/img/Slide-3.png
  - image_path: assets/img/Slide-2.png
  - image_path: assets/img/Slide-4.png
   
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

# CAD Model
<iframe src="https://myhub.autodesk360.com/ue2df0af5/shares/public/SH35dfcQT936092f0e437224cd558fdcdc2f?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

{% include gallery caption="DIY Syringe Pump" %}
