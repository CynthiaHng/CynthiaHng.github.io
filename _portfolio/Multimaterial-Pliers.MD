---
title: "Multimaterial Pliers"
excerpt: "Flexible pliers 3D printed through FFF printing using TPU and PLA materials"
header:
  image: /assets/img/pliers_pinch.jpeg
  teaser: /assets/img/pliers_pinch.jpeg
gallery:
  - image_path: /assets/img/pliers_pinch2.jpeg
  - image_path: /assets/img/pliers_closeup.jpeg
  - image_path: /assets/img/pliers_pile.jpeg
  - image_path: /assets/img/pliers_side.jpeg
  - image_path: /assets/img/pliers_split.jpeg
  - image_path: /assets/img/pliers_vert.jpeg
  - image_path: /assets/img/IMG_9930.GIF
   
---

# Multimaterial FFF 3D Printed Pliers

---

## Features

- Designed on Autodesk Fusion 360 for both flexible joint and rigid structures, generated to promote capabilities in open and closed flexible states of pliers
- Fused-Filament Fabrication (FFF) printing was utilized with Thermoplastic Polyurethane (TPU) and Polylactic Acid (PLA) materials
- TPU formed the flexible joint/pivot point of the pliers and PLA was used for the rigid handles and jaws of the pliers
- Print-in-place technique utilized for pivot point of pliers
- Rigid and flexible materials joined with separately printed parts linked together by clipping in

---

## Introduction and Description

This project looked into targeting optimizing functional design and multi-material fabrication. The goal wasn't just to model a tool, but to build a pair of functional needle-nose pliers that could perform a specific, precise task: gripping and picking up small through-hole resistors.


A standard, single-material 3D print would be a static, non-functional object. To make the pliers truly useful, they needed to automatically spring back to the open position when you let go. This is where the multi-material approach becomes essential.

The design combines two materials with opposite properties:

- Polylactic Acid (PLA): A rigid, stiff plastic used for the main handles and jaws, providing the structural integrity needed to grip objects.
- Thermoplastic Polyurethane (TPU): A flexible, elastic material used to create the central spring component.

By integrating the flexible TPU element into the rigid PLA body, we get a functional tool that leverages the best of both materials. This write-up documents the design process, the iterations needed to get the spring tension right, and the final 3-part assembly  that brings these materials together.

---

### Print-in-place Parts

- Print-in-place models are designs that can come off the 3D printer and be completely functional without any post-process assembly. They are designed to work immediately after being taken off the print bed. This is achieved by designing clearances for joints, or in this case, utilizing the grid shape and no-fill format for TPU to create the flexible joint.

- Some single-material print-in-places may lead to unreliable movement or crunchy results but in multi-material, such as the project, utilizing flexible material like TPU can help promote more flexible motion on hinges.

#### Research

Using the research from "Multi-material additive manufacturing: A systematic review of design, properties, applications, challenges, and 3D printing of materials and cellular metamaterials," they look into Multi-Material Additive Manufacturing (MMAM), similarly to print-in-place.
The goal of MMAM is to move beyond simple, single-material objects and create functional, high-value products. The article highlights that MMAM allows for:
The fabrication of intricate geometries.
Enhanced functionality and improved mechanical properties.
The combination of different material properties (like rigid and soft) into a single component.
A great example of this concept from the article is soft robotics. Soft robots require the seamless integration of soft, flexible materials (like elastomers) for movement and rigid materials for structure. MMAM is essential for this, as it allows for the creation of complex actuators and flexible joints (like your pliers) that are "inspired by nature" (Nazir et al., 2023).
Best Combinations of Materials
The article doesn't state a single "best" combination, but it systematically reviews which combinations are most studied and what the challenges are.
Most Investigated Categories: The two most widely researched categories of materials for MMAM are polymers and metals.
Polymer-Polymer Combinations: For projects like yours, the "Polymer-Polymer" category is the most relevant. This includes combining rigid polymers with flexible elastomers.


Key Challenges: The main challenges in printing dissimilar polymers are:

- Poor Bonding: Materials with low chemical affinity or incompatibility can have "inferior bonding strength" at the interface.
- Thermal Mismatch: Different plastics have different thermal expansion coefficients, which can cause "dissimilar shrinkage upon cooling," leading to distortion and "low dimensional stability."
- Specific Combinations Mentioned: The article specifically lists the exact combination you are using in its data tables.
- PLA and TPU: This combination is listed as having been studied for its impact resistance and tensile properties.
- ABS and TPU: This is another common rigid-flexible combination shown in the article, with studies focusing on its use in fabricating items like a wrist orthosis (Nazir et al., 2023).

---

### Design and Iterative Process

The pliers were designed from scratch in Autodesk Fusion 360 with the 3-part assembly caveat in mind. This meant creating two rigid PLA handles and one separate TPU spring that could be hand-pressed together.

The biggest challenge wasn't just modeling the pliers, but nailing the tolerances. Getting two different materials (rigid PLA and flexible TPU) from different printers to fit together perfectly is all about trial and error.

Prototyping: Before even thinking about printing the full pliers, I followed the advice in the project description and printed just the mating geometries. This was a massive time-saver. I printed the small section of the PLA handle where the TPU spring would slot in and the corresponding part of the spring itself.

Iteration: My first test fit was too loose, and the spring would have fallen out. I adjusted the model to have a tighter interference fit and reprinted the test pieces. After a couple of tries, I found the sweet spot where the parts would snap together securely by hand.

The Spring: Getting the spring's "feel" right was the next iteration. The assignment noted that the spring's geometry would determine the pliers' capacity and flex. My first full spring design was too thick, making it way too stiff and hard to close. I went back and designed a thinner version, which was much more flexible. I also printed the spring geometry by itself to test the flex before committing to the final assembly print.

The final design consists of the two rigid PLA handles and a single, optimized TPU spring. The spring element is designed to snap firmly into recessed slots in both handles, acting as both the pivot and the return mechanism.

---

### Relevant Specifications

- Jaw Length: 42mm
- Jaw Capacity: 25.4mm

---

### Print Settings (specifics and changes made)

- Using SuperSlicer 2.7 Beta
- VORON 300 0.6 Nozzle Blue
- Perimeters 3 minimum
- Solid layers: 0 for both top and bottom
- Infill: Grid sparse infill pattern; density: 25%; Top infill pattern: Monotonic
- Supports: No

---

## CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b6028119f9bf7d81bd63306" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

## References

Nazir, A., Gokcekaya, O., Md Masum Billah, K., Ertugrul, O., Jiang, J., Sun, J., & Hussain, S. (2023). Multi-material additive manufacturing: A systematic review of design, properties, applications, challenges, and 3D printing of materials and cellular metamaterials. *Materials & Design*, *226*, 111661. [https://doi.org/10.1016/j.matdes.2023.111661](https://doi.org/10.1016/j.matdes.2023.111661)

---

{% include gallery caption="Multimaterial Pliers" %}
