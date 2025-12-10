---
title: "Top-Down Modeled Bike Phone Holder"
excerpt: "A custom 3D printed phone mount featuring a spring-loaded detent mechanism for rotation, designed using top-down CAD modeling techniques."
header:
  image: /assets/img/phone_holder_side.jpeg
  teaser: /assets/img/holder_empty_side.jpeg
gallery:
  - image_path: /assets/img/holder_empty_front.jpeg
  - image_path: /assets/img/holder_empty_side.jpeg
  - image_path: /assets/img/holder_empty_back_upright.jpeg
  - image_path: /assets/img/holder_empty_back.jpeg
  - image_path: /assets/img/rotating_phone_holder.gif
  - image_path: /assets/img/render1.png
  - image_path: /assets/img/render2.png
  - image_path: /assets/img/render3.png
  - image_path: /assets/img/render4.png
  - image_path: /assets/img/sectionanalysis1.png
  - image_path: /assets/img/sectionanalysis2.png

---

## Features

- **Top-Down Structure:** Modeled entirely within context in Autodesk Fusion 360. The design references the master geometry of the handlebars and the mobile device as the primary drivers, ensuring precise, interference-free fitment. Multiple models were made and sectioned off using top-down assembly.
- **Tool-Free Convenience:** Engineered for rapid attachment and removal of the phone after clamp has been securely attached onto a handlebar but also allows for easy adjustment of clamp angle and location due to two-piece structure.
- **Ball Detent Mechanism:** Integrated spring-loaded ball bearing system that allows the device to be turned at 90, 180, 270, and 360 degrees.
- **Parameterized:** All dimensions on the Fusion 360 CAD model is parameterized to be customized for ideal fits.

---

## Introduction and Top-Down Methodology

This project focused on designing an additive manufacturing technique nown as Top-Down Modeling to create a bicycle/scooter phone mount that allowed for rotational flexibility while including flexibility. Key functional constraints of this project dictated that the device was to be attachable without separate tools for assembly (after setup it is easily accessible when it comes to functionality). It also allows for rotational adjustment by converting seamlessly between landscape and portrait orientations to adjust to the user's needs.

The core engineering challenge focused on the digital workflow, specifically the implementation of a Top-Down Modeling approach. Unlike traditional modeling, where parts are designed in isolation and subsequently assembled via constraints, top-down modeling generates components in context of each component using a shared master structure.

### Leveraging Top-Down Design

The CAD process was initiated by creating a master sketch layout of the fixed handlebars component along with multiple versions of the target clamp design ideas. Additional shared components such as the phone holder, the detent component, and the ball-spring mechanism were modeled after and used in a shared component folder for easy duplication to each clamp design.

Rather than taking dimensional estimates for each component, parameters were used to allow for adjustments towards the geometry of the handlebars and mounting clamps given the provided diameters of the handlebars. Similarly, the cradle for the phone holder was taken by directly using an imported phone model of the user's desired choice. These steps ensured that modifications to the master sketch would become uniform for all additional components that followed and allowed for tight interference fits, though small amounts of clearance was ensured for printing errors.

---

## Design Rationale

The assembly is divided into three primary sub-systems: the clamp component, the detent component, and the phone holder.

### The Rotation Mechanism
To satisfy the requirement for tool-free rotation, a mechanical detent mechanism was implemented. This system utilizes a spring-loaded steel ball bearing housed within the rotating hub, which interacts with a radial track containing specific indexing notches (detents) located at 0 and 90 degrees.

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
Fused Filament Fabrication (FFF) was utilized for all structural components.

* **Material Used:** PLA and TPU
    * *Rationale:* PLA was selected for its high stiffness and ability to withstand pressure when screwed tightly, as well as not deforming when pressure is applied, and TPU for its flexibility and elasticity to act as the phone holder.
* **Resolution & Density:** A 0.2mm layer height was selected to balance print velocity with geometric fidelity. All load-bearing parts were printed with 4 perimeter walls (shells) to maximize hoop strength around fasteners.

### Components
1. **The Clamp:** Fabricated with 20% infill density to withstand the compressive forces exerted by the mounting hardware. Holes are created to allow for heat sets and bolts to be attached for securement. PLA was used for stability and rigidity for the clamp component and bolts were used to ensure a secure hold.
2. **The Phone Holder:** A flexible TPU printed phone holder that is customized to the user's phone by using phone case models to create personalized fits.
3. **The Detent Component:** Standard metal ball bearings and compression springs were utilized to create a detent mechanism that is enclosed within the top clamp section. The detent spin component is a separate component that is attached to the phone holder but separate from the clamp to allow for rotation.

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
