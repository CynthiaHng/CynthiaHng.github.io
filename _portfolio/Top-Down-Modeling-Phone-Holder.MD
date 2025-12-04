---
title: "Top-Down Modeled Bike Phone Holder"
excerpt: "A custom 3D printed phone mount featuring a spring-loaded detent mechanism for rotation, designed using top-down CAD modeling techniques."
header:
  image: /assets/img/phone_holder_side.jpeg
  teaser: /assets/img/holder_empty_side.jpeg
gallery:
  - image_path: /assets/img/holder_empty_side_tilt.jpeg
  - image_path: /assets/img/holder_empty_front.jpeg
  - image_path: /assets/img/holder_empty_side.jpeg
  - image_path: /assets/img/holder_empty_back_upright.jpeg
  - image_path: /assets/img/holder_empty_back.jpeg
  - image_path: /assets/img/spin_video_1.mov
  - image_path: /assets/img/spin_video_2_final.mp4

---

## Features

- **Top-Down Structure:** Modeled entirely within context in Autodesk Fusion 360. The design references the master geometry of the handlebars and the mobile device as the primary drivers, ensuring precise, interference-free fitment.
- **Tool-Free Quick Release:** Engineered for rapid attachment and removal, utilizing a hand-tightened clamping system that eliminates the requirement for external drivers or hex keys.
- **Indexed Detent Rotation:** Integrated spring-loaded ball bearing system allowing the device to snap securely between portrait (0°) and landscape (90°) orientations with positive haptic feedback.
- **Vibration Damping & Stability:** Secure clamping geometry optimized to withstand high-frequency road vibrations while maintaining the selected viewing angle without drift.
- **Customizable Interface:** Dimensioned specifically for a [25.4mm / 22.2mm] handlebar diameter, with parametric history allowing for rapid adaptation to other standard tube sizes.

---

## Introduction and Top-Down Methodology

The primary objective of this project was the design, engineering, and additive manufacturing of a bicycle/scooter phone mount prioritizing user ergonomics and mechanical reliability. Key functional constraints dictated that the device must attach securely without separate tools and rotate seamlessly between landscape and portrait orientations to accommodate varying navigation applications.

The core engineering challenge focused on the digital workflow, specifically the implementation of a **Top-Down Modeling** approach. Unlike traditional "bottom-up" modeling, where parts are designed in isolation and subsequently assembled via constraints, top-down modeling generates components *in context* using a shared master structure.

### Leveraging Top-Down Design
The CAD process was initiated by establishing a "skeleton" or master sketch layout within a parent component. The fixed environmental component (handlebars) and the target object (mobile device) were modeled first to define the spatial envelope and visual ergonomics relative to the rider. These two existing geometries functioned as the "single source of truth" for the subsequent assembly.

Rather than relying on isolated dimensional estimates, the geometry of the handlebars was projected directly into the sketches for the mounting clamp. Similarly, the grip width of the cradle was driven by the imported phone model. This **parametric associativity** ensured that modifications to the master sketch—such as changes to handlebar diameter or device dimensions—would automatically propagate through the entire assembly hierarchy. This workflow was critical for maintaining tight interference fits and tolerance stack-ups for the final 3D printed assembly.

---

## Design Rationale

The assembly is divided into three primary sub-systems: the clamp component, the detent component, and the phone holder.

### The Rotation Mechanism
To satisfy the requirement for tool-free rotation, a **mechanical detent mechanism** was implemented. This system utilizes a spring-loaded steel ball bearing housed within the rotating hub, which interacts with a radial track containing specific indexing notches (detents) located at 0 and 90 degrees.

* **Performance:** The detent provides distinct tactile feedback—a "click"—upon reaching the correct orientation. The spring constant was selected to secure the device against gravity and vibration-induced torque, yet allow the mechanism to yield when intentional rotational force is applied by the user.
* **Justification:** A mechanical lock was selected over a simple friction-fit system. Friction fits rely on surface abrasion and are prone to wear-induced loosening over time. The detent system ensures consistent holding torque over repeated duty cycles and thousands of rotations.

### 3D Printing Considerations and Tolerances
Designing for Fused Filament Fabrication (FFF) necessitated specific dimensional adjustments to account for the material properties of thermoplastics:
* **Clearances:** The rotation mechanism incorporates parametrized clearance gaps (0.2mm - 0.3mm) between the dynamic hub and the static mount. This prevents component fusion during the printing process and mitigates friction caused by layer seams.
* **Thermal Insert Integration:** Bores for M5 heat-set inserts were intentionally undersized to allow the heated brass knurling to displace the surrounding thermoplastic. This creates a mechanical interlock superior to printing plastic threads, which are prone to stripping under torque.
* **Anisotropic Optimization:** Clamping arms were printed in a flat orientation on the build plate. This aligns the printed layer lines with the primary stress vectors, utilizing the continuous filament strands to resist tensile loads rather than relying on weaker inter-layer adhesion.

---

## Fabrication and Materials

### Printing Technology
Fused Filament Fabrication (FFF) was utilized for all structural components. While alternative methods like SLS (Selective Laser Sintering) offer isotropic strength, it was determined that proper part orientation and slicer settings provided sufficient structural integrity for this application.

* **Material Used:** PLA and TPU
    * *Rationale:* PLA was selected for its high stiffness and modulus of elasticity and TPU for its flexibility and elasticity to act as the phone holder.
* **Resolution & Density:** A 0.2mm layer height was selected to balance print velocity with geometric fidelity. All load-bearing parts were printed with 4 perimeter walls (shells) to maximize hoop strength around fasteners.

### Components
1. **The Clamp:** Fabricated with 20% infill density to withstand the compressive forces exerted by the mounting hardware. The geometry includes filleted stress-relief points to prevent cracking at sharp corners.
2. **The Phone Holder:** Printed utilizing support structures to accommodate the overhang geometry of the retention clips. The clips were designed with a slight inward flex to actively grip the device.
3. **The Detent Component:** Standard metal ball bearings and compression springs (Kit A) were utilized rather than printed alternatives. Thermoplastic springs are susceptible to **viscoelastic creep** (permanent deformation) under constant load, which would result in a loss of clamping force over time.

---

## Assembly Instructions

1.  Print all components (detent component, clamp top component, and clamp bottom component) in Fusion 360 file using PLA and the phone holder component in TPU.
2.  Assemble parts by inserting 4 M5 heat sets into the top clamp component and 3 M3 heat sets into the indicated holes in the top clamp component for lid securing. In the middle of the detent component, insert an M3 heat set to secure the phone holder onto the detent component.
3.  Insert 4 M5x25 bolt into the top clamp component bolt components, connect the bottom clamp component and attach bolts to the bottom of the bottom component, this should give clearance to attach onto a bike or scooter handle
4.  Insert a 7mm (diameter) and 15mm (length) spring into the detent box compartment and a 7mm ball attached to it. Insert the detent component, compressing the ball and spring combination.
5.  Align the lid over the detent component and align the holes to the top clamp component's M3 heat sets. Screw in 6mm long M3 screws or bolts.
6.  Align the hole in the phone holder component to the M3 heatset at the top of the detent component. Screw in a 12mm M3 bolt or screw.
7. The assembly is complete and to tighten or loosen the clamp to fit different sizes, secure or loosen the bolts attached to the bottom clamp component.

---

## CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b60281178dea6df970e33cc" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true" frameborder="0"></iframe>

---

{% include gallery caption="Phone Holder Views and Mechanisms" %}
