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

# Top-Down Modeled Bike Phone Holder

---

## Features

- **Top-Down Design:** Modeled entirely within context in Autodesk Fusion 360, referencing the master geometry of the handlebars and the phone for perfect fitment.
- **Tool-Free Operation:** Designed for quick phone attachment and removal without the need for screwdrivers or hex keys.
- **Detent Rotation Mechanism:** Integrated spring-loaded ball bearing system allowing the phone to snap securely between portrait and landscape orientations.
- **Vibration Resistance:** Secure clamping geometry designed to withstand road vibrations while maintaining the user's preferred viewing angle.
- **Custom Fitment:** Specifically sized for a [25.4mm / 22.2mm] handlebar diameter.

---

## Introduction and Top-Down Methodology

The objective of this project was to design and filament 3D print a phone holder for a bike or scooter that prioritizes user experience. The key constraints were that the phone must attach quickly without separate tools and rotate easily between landscape and portrait orientations.

However, the core engineering challenge was not just the physical utility, but the digital workflow. This project was executed using a **Top-Down Modeling** approach. Unlike traditional "bottom-up" modeling, where parts are designed in isolation and then assembled, top-down modeling creates components *in context* using a shared master structure.

### Leveraging Top-Down Design
I began the CAD process by creating a "skeleton" or master layout in a new component. I modeled the handlebars (the fixed component) and the phone (the target object) first, positioning them in space relative to how a rider would view them. These two existing geometries served as the primary drivers for the rest of the design.

Instead of guessing dimensions or measuring back and forth, I projected the geometry of the handlebars directly into the sketches for the mounting clamp. Similarly, the phone holder's grip width was driven by the imported phone model. This ensured that if the diameter of the handlebars or the size of the phone changed in the master sketch, the entire holder assembly would automatically update to fit. This parametric approach was crucial for maintaining tight tolerances for the 3D printed parts.
---

## Design Rationale

The design is broken down into three main sub-assemblies: the Handlebar Mount, the Rotation Core, and the Phone Cradle.

### The Rotation Mechanism
To satisfy the requirement of rotating the phone between portrait and landscape without tools, I implemented a **detent mechanism**. This system uses a small spring-loaded ball bearing housed within the rotating hub. The bearing presses against a track with specific notches (detents) located at 0 and 90 degrees.

* **Does it work well?** The detent provides tactile feedback—a satisfying "click"—when the phone reaches the correct orientation. It holds the phone securely against gravity and vibration but yields when the user applies intentional rotational force.
* **Why this choice?** A simple friction fit would eventually wear down and become loose. The detent system creates a mechanical lock that remains consistent over repeated cycles.

### 3D Printing Considerations and Tolerances
Designing for Fused Filament Fabrication (FFF) required specific dimensional adjustments:
* **Clearances:** The rotation mechanism required a parametrized clearance gap between the moving hub and the static mount to prevent them from fusing together or grinding during operation.
* **Hole Sizing:** Holes for the M5 heat-set inserts were undersized slightly to allow the heated brass to displace the plastic and form a strong bond.
* **Orientation:** The clamping arms were printed flat on the bed to align the layer lines with the stress forces, preventing snapping when tightened around the handlebars.

---

## Fabrication and Materials

### Printing Technology
I utilized FFF (filament printing) for all components. While powder printing was an option for higher strength, I found that properly oriented parts provided sufficient structural integrity for this application.

* **Material Used:** [Insert Material: e.g., PLA / PETG]
    * *Why?* [Insert Reason: e.g., PLA was chosen for its rigidity / PETG for outdoor durability].
* **Resolution:** 0.2mm layer height for a balance of speed and detail.

### Components
1.  **The Clamp:** Printed with high infill to resist the crushing force of the mounting bolts.
2.  **The Cradle:** Printed with supports to accommodate the overhangs of the phone retention clips.
3.  **The Detent Pin:** I opted to use the supplied metal ball bearings and compression springs (Kit A) rather than printing them, as 3D printed springs often relax under constant load (creep).

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
