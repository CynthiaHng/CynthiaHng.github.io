---
title: "Microfluidic Device"
excerpt: "Microfluidic Device utilizing pinch flow fractionation to separate particles of ranging diameters 125-150 micrometers and 425-500 micrometers"
header:
  image: /assets/img/microfluidic_device_angled.jpg
  teaser: /assets/img/microfluidic_device_angled.jpg
gallery:
  - image_path: /assets/img/microfluidic_device.jpg
  - image_path: /assets/img/microfluidic_setup.jpg
   
---

# Microfluidic Pinch Flow Fractionation Device

---

## Features

- Designed with pinch flow fractionation (PFF) to promote particle separation based on size differences and the effects of water flow
- Resin mold created through CAD modeling using Autodesk Fusion 360 paired with a Form 4 clear resin printer
- Actual model created with PDMS casting and glass bonding for optical clarity and sealed channels for experimentation
- Uses 2.2 mm inlet and outlet ports for tube attachment (shown in gallery) 
- Channel walls are designed to be at least 3 mm from the device's edge to prevent breakage or failure in the mold creation process
- The minimum feature sizes are 85 µm in the (XY) and 25 µm (Z)
- An aspect ratio of 4:1 or less was respected to prevent taller features from breaking off during the demolding process
- Outlet channels were created to help balance hydraulic resistance within the device to optimize equalized flow for the particle streams
- Space within the device was optimized and made intentional to avoid bubble formation streamline disruption

---

## Introduction

Pinch flow fractionation (PFF) is a microfluidic technique used to continuously separate particles by size using laminar flow dynamics. In PFF, two co-flowing streams from two inlet ports (one stream introducing a stream containing particles of different sizes while the other contains a no-particle buffer) enter a **pinched region**, forcing the particles into distinct streamlines due to their sizing differences. As the channel broadens, the optimally desired output is having the different sized particles maintain their lateral positions and exit through separate outlets.

One practical application of PFF is in cell sorting, where biological cells of different sizes can be separated without mechanical filters or labeling. This approach reduces clogging and shear stress, offering higher throughput and precision compared to filtration or centrifugation-based methods ([Yamada et al., 2004](https://pubs.acs.org/doi/10.1021/ac049863r)).

---

## Device Design

The device was designed using an almost symmetric three-outlet PFF geometry that optimized for separating 125–150 µm and 425–500 µm particles.  

- **Pinch width (wp):** ~600 µm  
- **Broad section width (wb):** ~2.5 mm  
- **Outlet spacing:** 11 mm (center-to-center)  
- **Channel height:** 150 µm  

The outlets were positioned according to the theoretical separation location given by the streamline displacement equation:

<script src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js" async></script>

$$
Y_0 = \frac{(w_p - D/2) \, w_b}{w_p}
$$

To prevent unequal backpressure between outlets, outlet channels for small- and large-particle flows were *extended and narrowed, increasing their hydraulic resistance. The buffer outlet was designed shorter and wider to naturally carry higher volumetric flow.  

If iterating on this design, further optimization of **outlet lengths and curvature** could enhance separation efficiency while minimizing dead volume.

---

## Fabrication and Instructions

### Steps - CAD to Device

1. Design the mold in Fusion 360 using the provided 75 mm × 50 mm base template.  
2. Ensure inlets/outlets are modeled as 2.2 mm posts extending 1 mm above the surface.  
3. Export and print the mold using a **Formlabs Form 3/4 SLA printer** (black or high-temp resin).  
4. Wash in IPA for 5 minutes on and 5 minutes off the bed (total <15 minutes).  
5. Dry mold upside down for 30 minutes and **UV cure** for 60 seconds.  
6. Coat the mold with parylene to prevent PDMS curing inhibition and to ease demolding.  
7. Mix PDMS (10:1 base:curing agent and pour into the mold; cure at 65°C for 4 hours.  
8. Peel PDMS, punch inlet/outlet holes, and plasma treat both PDMS and glass slide.  
9. Bond PDMS to glass immediately after plasma treatment and bake for 10 minutes at 60°C.  
10. Connect tubing to inlets and outlets; operate using syringe pumps for buffer and particle streams.

---

## Discussion

### Why Resin Printing?
SLA resin printing provides the high resolution and smooth surface finish necessary for reliable PDMS casting and glass bonding — features difficult to achieve with FDM printers or CNC milling.

### Scalability
This design can be scaled by adjusting the pinch width and outlet geometry to accommodate particles from tens to hundreds of microns.

### Lower Size Limit
The smallest separable particle is limited by surface roughness, printer resolution, and channel height — typically around 50–80 µm for this specific device size.

### Future Improvements
- Incorporate **asymmetric PFF (AsPFF)** geometry to enhance separation efficiency.  
- Add **on-chip flow resistors or valves** to fine-tune outlet flow balance.  
- Test with **biological cell analogs** to evaluate sorting fidelity.  

---

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/g/shares/SH90d2dQT28d5b602811f2218d8d4c2c1255?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

---

## References

1. Yamada, M. et al. *Pinched Flow Fractionation: Continuous Size Separation of Particles Utilizing a Laminar Flow Profile in a Pinched Microchannel*, **Analytical Chemistry**, 2004. [https://pubs.acs.org/doi/10.1021/ac049863r](https://pubs.acs.org/doi/10.1021/ac049863r)  
2. *Rapid prototyping of cell culture microdevices using parylene-coated 3D prints*, **Lab Chip**, 2021. [https://pubs.rsc.org/en/content/articlelanding/2021/lc/d1lc00744k](https://pubs.rsc.org/en/content/articlelanding/2021/lc/d1lc00744k)

---

{% include gallery caption="Microfluidic Device" %}
