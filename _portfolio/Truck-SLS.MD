---
title: "Generative Design Skateboard Truck & Motor Mount"
excerpt: "A lightweight, consolidated electric skateboard truck hanger created using Generative Design in Fusion 360, optimized for Nylon 12 and AlSi10Mg Powder Bed Fusion."
header:
  image: /assets/img/truck1
  teaser: /assets/img/truckon1
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

- **Generative Design Workflow:** Modeled using Autodesk Fusion 360's Generative Design extension. The geometry was "grown" based on functional requirements, connecting the "preserve" geometries (axle, pivot cup, motor mount) while avoiding "obstacle" geometries (wheels, deck).
- **Part Consolidation:** Replaces a traditional multi-part assembly (hanger, clamping ring, motor mount bracket) with a single, monolithic component.
- **Multi-Material Optimization:** Solved simultaneously for Nylon 12 (SLS) and AlSi10Mg (Direct Metal Laser Sintering).
- **Shear & Static Loading:** Optimized to resist not just the weight of the rider, but the lateral shear forces experienced during hard turning and sliding.

---

## Introduction and Methodology

This project focused on the application of Generative Design (GD) to create a custom electric longboard truck that integrates the motor mount directly into the hanger geometry. Unlike traditional "Top-Down" modeling where shapes are drawn explicitly, this workflow used an algorithmic approach to generate optimal material placement based on boundary conditions.

The core engineering challenge was defining the *problem definition*—specifically, ensuring the preserves (interfaces) were accurate and the obstacles (clearances) prevented the software from placing material where the belt or wheels needed to spin.

---

## Discussion and Design Rationale

### Industry Application: The Airbus "Bionic Partition"
The pairing of Generative Design with Powder Bed Fusion (PBF) is revolutionizing the aerospace industry by removing the constraints of traditional tooling. A prime example (distinct from the automotive sector) is the **Airbus A320 Bionic Partition**.

Created by Airbus and Autodesk, this partition separates the passenger cabin from the galley. Traditionally, this was a heavy, honeycomb composite wall. Using generative design, Airbus created a lattice structure that mimicked slime mold growth patterns to optimize load paths. The result was printed in **Scalmalloy (an aluminum-magnesium alloy)** using DMLS. This reduced the part weight by **45% (30kg per plane)**, directly reducing fuel consumption and CO2 emissions. This mirrors our project goal: utilizing high-stiffness alloys (AlSi10Mg) to reduce mass while maintaining structural integrity in a complex assembly.

### Load Cases and Constraints
Applying proper load cases is critical, as the solver only reacts to defined forces. Based on the design review, the model was updated to account for realistic riding conditions:
* **Vertical Load (Rider Weight):** A force of **750 N** was applied to the axle preserves to simulate a standard rider (approx. 75kg).
* **Lateral Shear (Turning):** A transverse force of **300 N** was applied laterally to the axles. This is crucial because standard trucks fail in shear during slides or sharp carves. Engineering materials often have lower shear strength than tensile strength, so neglecting this would result in a fragile print.
* **Constraints:** The **Pivot Cup** and the **Kingpin Hole** were constrained as "Fixed" anchor points, dictating the roots from which the material grew.

### Material Comparison: Nylon 12 vs. AlSi10Mg
* **Nylon 12 (SLS):** The nylon outcome resulted in a bulkier volume. Because Nylon has a lower Young's Modulus, the algorithm generated thicker branches to resist deflection. While Nylon is durable for impact, it acts as a thermal insulator, which is suboptimal for a motor mount.
* **AlSi10Mg (Aluminum):** The aluminum outcome was significantly finer. The high stiffness allowed for thin, efficient struts. This is the superior choice for this application as the hanger acts as a heatsink for the motor.

---

## Improvements and Critical Analysis

Upon post-processing the initial SLS print, several critical design failures were identified. These errors highlight the difference between a "successful solve" in CAD and a functional part in reality.

### 1. Belt Tension & Motor Distance
The most significant error was the positioning of the motor mount preserve.
* **The Failure:** The motor mount was placed ~105mm from the axle center. The required distance for the supplied belt was **~73mm**. This made the belt impossible to install.
* **The Correction:** In the revised CAD model, the "Obstacle Geometry" for the motor was shifted closer to the hanger to match the 73mm center-to-center specification.

### 2. Tolerance & Fitment
* **The Failure:** The Kingpin hole and Axle pass-through were modeled at exact nominal dimensions (9.5mm and 8mm respectively). Due to thermal shrinkage in the SLS process, these holes printed undersized.
* **The Correction:** For future prints, a tolerance offset of **+0.3mm** must be applied to all internal diameters in the "Preserve Geometry" phase.

### 3. Constraint Logic
* **The Failure:** Initially, only the pivot cup was constrained. This allowed the software to potentially "float" the kingpin area, resulting in weak geometry around the bushing seat.
* **The Correction:** The load case was updated to strictly constrain both the pivot cup and the kingpin interface to ensure a rigid connection to the baseplate.

---

## CAD Model

<iframe src="YOUR_FUSION_LINK_HERE" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

---

{% include gallery caption="Truck SLS Generative Design" %}
