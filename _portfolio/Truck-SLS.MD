---
title: "Generative Design Skateboard Truck & Motor Mount"
excerpt: "A lightweight, consolidated electric skateboard truck hanger created using Generative Design in Fusion 360, optimized for Nylon 12 and AlSi10Mg Powder Bed Fusion."
header:
  image: /assets/img/truck1.jpg
  teaser: /assets/img/truckon1.jpg
gallery:
  - image_path: /assets/img/truck1.jpg
  - image_path: /assets/img/truck2.jpg
  - image_path: /assets/img/truck3.jpg
  - image_path: /assets/img/truck4.jpg
  - image_path: /assets/img/truck5.jpg
  - image_path: /assets/img/truckon1.jpg
  - image_path: /assets/img/
---

## Features

- **Generative Design Workflow:** Modeled using Autodesk Fusion 360's Generative Design feature. The geometry was generated based on functional requirements, connecting the preserved and obstacle geometries. The preserved geometries included a kingpin hole for the kingpin to pass through, pivot point for the insertion point of the pivot cup, sleeves for locating areas for preservation to include bolts for the motor, and wheel stoppers on the rods to ensure wheel placement. The obstacle geometries included a clearance for modeling rod placement, kingpin washers and bushings to make space, wheels, motor locations, belt track, pulleys, clearance for motor bolts, and the baseplate of the truck.
- **Multi-Material Optimization:** Solved the generative design simultaneously for Nylon 12 and AlSi10Mg to observe structures, printed in AlSi10Mg.
- **Shear & Static Loading:** Structural loads were optimized to resist not just the weight of the rider, but the lateral shear forces experienced during hard turning and sliding.

---

## Introduction and Methodology

This project focused on the application of Generative Design (GD) to create a custom electric longboard truck that integrates the motor mount directly into the hanger geometry. This approach focuses on allowing generative designs in programs to create structures that are more organic and optimized through simulations rather than treated by hand. This allows for more accurate designs and faster prototyping generation for testing.

The main functions of generative design is to focus on preserving the geometries that need to be kept, and creating obstacles to allow for clearance. This allows the software to place or not place materials in the constraints listed and optimize the design around the user's preferences or given restrictions.

---

## Discussion and Design Rationale

### Industry Application: The Airbus "Bionic Partition"
The pairing of Generative Design with Powder Bed Fusion (PBF) is revolutionizing the aerospace industry by removing the constraints of traditional tooling. A prime example is the Airbus A320 Bionic Partition.

This partition was created by Airbus and Autodesk and separates the passenger cabin from the gallery. Traditionally, the design is a honeycomb style composite wall, but through generative design, Airbus came up with a lattice structure that mimicked slime mold growth patterns that helped optimize load paths. The result was printed using an aluminum-magnesium alloy, Scalmalloy, using DMLS. This helped reduce the weight of parts by 45% and helped reduce fuel consumption along with CO2 emissions. 

### Load Cases and Constraints for Truck Design
Applying proper load cases is critical, as the solver only reacts to defined forces. Based on the design reviews, the truck SLS model incorporated the following restrictions in addition to the structure's desgin:
* **Vertical Load (Rider Weight):** A force of 500N each was applied to the axle preserves of each wheel to support the weight of a rider and account for tilt or lean.
* **Lateral Shear (Turning):** A transverse force of 300 N was applied laterally to each axle. This is crucial because standard trucks fail in shear during slides or sharp carves. Engineering materials often have lower shear strength than tensile strength, so neglecting this would result in a fragile print. There is also 100N shear force applied towards each of the inside of the axles to account for tilt or lean in addition to turns which were mapped in the y-axis. 
* **Constraints:** The Pivot Cup and the inside of the Kingpin Hole were constrained as "Fixed" anchor points for the design.

### Material Comparison: Nylon 12 vs. AlSi10Mg
* **Nylon 12 (SLS):** The nylon outcome resulted in a bulkier volume. Because Nylon has a lower Young's Modulus, the algorithm generated thicker branches to resist deflection. While Nylon is durable for impact, it acts as a thermal insulator, which is suboptimal for a motor mount.
* **AlSi10Mg (Aluminum):** The aluminum outcome was significantly finer. The high stiffness allowed for thin, efficient struts. This is the superior choice for this application as the hanger acts as a heatsink for the motor.

---

## Improvements and Critical Analysis

Upon post-processing the initial SLS print, several critical design failures were identified. The errors are addressed below:

### 1. Belt Tension & Motor Distance
The most significant error was the positioning of the motor mount preserve.
* **The Failure:** The motor mount was placed ~105mm from the axle center. The required distance for the supplied belt was **~73mm**. This made the belt impossible to install due to having the motor being located too far from its desired location.
* **The Correction:** In the revised CAD model, the motor was shifted closer to the hanger to match the 73mm center-to-center specification along with the belt track and motor bolt holes.

### 2. Tolerance & Fitment
* **The Failure:** The Kingpin hole pass-through was modeled at its exact dimension and led to an unfit of the truck design to the longboard. The axle hole clearance was also modeled with too little clearance (8.2mm) and the axle center rod was unable to fit through the model. Due to thermal shrinkage in the SLS process, these holes were likely printed undersized.
* **The Correction:** The holes were made bigger with a 1.5mm clearance added to the kingpin hole and the axle hole clearance was increased to 9mm.

### 3. Constraint Logic
* **The Failure:** Initially, only the pivot cup was constrained. This allowed the software to potentially "float" the kingpin area, resulting in weak geometry around the bushing seat.
* **The Correction:** The load case was updated to strictly constrain both the pivot cup and the kingpin interface to ensure a rigid connection to the baseplate.

---

## CAD Model

### Generative Block Contraints Model
<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b602811ef32a6b664959981" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

### Generative Mesh Design:

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b6028118d5b55a0b5b83899" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

---

{% include gallery caption="Truck SLS Generative Design" %}
