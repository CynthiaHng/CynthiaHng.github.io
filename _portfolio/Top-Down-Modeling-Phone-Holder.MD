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

- **Top-Down Design:** Modeled entirely within context in Autodesk Fusion 360, utilizing the master geometry of the handlebars and mobile device to ensure precise fitment.
- **Tool-Free Operation:** Engineered for rapid attachment and removal, eliminating the requirement for external drivers or hex keys.
- **Detent Rotation Mechanism:** Integrated spring-loaded ball bearing system allowing the device to snap securely between portrait and landscape orientations.
- **Vibration Resistance:** Secure clamping geometry optimized to withstand road vibrations while maintaining the selected viewing angle.
- **Custom Fitment:** Dimensioned specifically for a [25.4mm / 22.2mm] handlebar diameter.

---

## Introduction and Top-Down Methodology

The primary objective of this project was the design and additive manufacturing of a bicycle/scooter phone mount prioritizing user ergonomics. Key constraints dictated that the device must attach securely without separate tools and rotate seamlessly between landscape and portrait orientations.

The core engineering challenge focused on the digital workflow, specifically the implementation of a **Top-Down Modeling** approach. Unlike traditional "bottom-up" modeling, where parts are designed in isolation and subsequently assembled, top-down modeling generates components *in context* using a shared master structure.

### Leveraging Top-Down Design
The CAD process was initiated by establishing a "skeleton" or master layout within a new component. The fixed component (handlebars) and the target object (mobile device) were modeled first to define the spatial envelope relative to the user's viewpoint. These two existing geometries functioned as the primary drivers for the subsequent assembly.

Rather than relying on isolated dimensional estimates, the geometry of the handlebars was projected directly into the sketches for the mounting clamp. Similarly, the grip width of the cradle was driven by the imported phone model. This parametric approach ensured that modifications to the master sketch—such as changes to handlebar diameter or device dimensions—would automatically propagate through the assembly, maintaining the necessary tolerances for 3D printed parts.

---

## Design Rationale

The assembly is divided into three primary sub-systems: the Handlebar Mount, the Rotation Core, and the Phone Cradle.

### The Rotation Mechanism
To satisfy the requirement for tool-free rotation, a **detent mechanism** was implemented. This system utilizes a spring-loaded ball bearing housed within the rotating hub, which interacts with specific notches (detents) located at 0 and 90 degrees.

* **Performance:** The detent provides tactile feedback—a distinct "click"—upon reaching the correct orientation. It secures the device against gravity and vibration but yields when intentional rotational force is applied.
* **Justification:** A mechanical lock was selected over a friction-fit system to prevent wear-induced loosening and ensure consistent performance over repeated duty cycles.

### 3D Printing Considerations and Tolerances
Designing for Fused Filament Fabrication (FFF) necessitated specific dimensional adjustments:
* **Clearances:** The rotation mechanism incorporates parametrized clearance gaps between the dynamic hub and the static mount to prevent component fusion or abrasion during operation.
* **Hole Sizing:** Bores for M5 heat-set inserts were intentionally undersized to allow the heated brass to displace the thermoplastic, ensuring a robust mechanical bond.
* **Orientation:** Clamping arms were printed in a flat orientation on the build plate to align layer lines with stress vectors, thereby maximizing tensile strength during tightening.

---

## Fabrication and Materials

### Printing Technology
Fused Filament Fabrication (FFF) was utilized for all structural components. While powder-based printing offers high isotropic strength, it was determined that proper part orientation provided sufficient structural integrity for this application.

* **Material Used:** [Insert Material: e.g., PLA / PETG]
    * *Rationale:* [Insert Reason: e.g., PLA was selected for high rigidity / PETG was selected for UV resistance and outdoor durability].
* **Resolution:** 0.2mm layer height was selected to balance print velocity with geometric fidelity.

### Components
1. **The Clamp:** Fabricated with high infill density to withstand the compressive forces exerted by the mounting hardware.
2. **The Cradle:** Printed utilizing support structures to accommodate the overhang geometry of the retention clips.
3. **The Detent Pin:**
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
