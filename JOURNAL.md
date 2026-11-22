---
title: "Garage Door Controller"
github: "https://github.com/zacianculovici/Garage-Door-Controller"
description: "An ESP32-C3 based bluetooth controller for an old B\u0026D roller door that was being dicky."
created_at: "2026-10-23"
total_time: "23h 12m"
---

# October 23, 2026: Begun schematic with most components
<!-- fabricate:entry 1113 -->

## First Devlog!
## Begun schematic
Today I begun working on the schematic for Garage-Door-Controller! I added most of the components (just the ones I need for the basic ESP32-C3 devboard) and started routing wires. I found symbols and footprints for ESP32-based boards at [this](https://github.com/espressif/kicad-libraries) kicad plugin, which was really helpful.
## Tutorial
I am working off [a really helpful tutorial](https://https://roboticworx.io/blogs/projects/custom-esp32-boards-from-scratch-tutorial) on how to make custom ESP32 boards, which I will divert from, adding an SSR, making a nice devboard that suits my needs (being able to control an old roller door via relay and bluetooth).

Timelapse: https://lapse.hackclub.com/timelapse/91kDBI86L1U7

**Total time spent: 48m**

# October 24, 2026: Finished basic wiring and added most footprints
<!-- fabricate:entry 1166 -->

## Devlog #2!
## Schematic wiring
Today I finished most of the schematic wiring and symbol placement. I still have to add the SSR, but the basic ESP32-C3 design is done!
## Footprints
I also assigned most of the footprints for the parts, using some inbuilt ones (such as 0805 and 0603), and some from the LCSC Kicad Plugin for the jlcpcb assembly parts.

Timelapse: https://lapse.hackclub.com/timelapse/Z6Y6iZjBIavi

**Total time spent: 1h**

# October 28, 2026: Finished schematic, placed components and did some routing
<!-- fabricate:entry 1470 -->

## Devlog #3!
*Note: I did all of this on Sun 25th Oct, but had to devlog it retrospectively as I went away.*

## Schematic
Today I finished the schematic, adding the optocoupler (SSRs have a feeder loading fee at JLCPCB), fixing the pin connectors, and screw terminals. I figured out exactly what JLCPCB parts I would use for each component, using the [Kicad LCSC Plugin](https://github.com/hulryung/kicad-lcsc-manager) for footprints. 

## Placement
Today I also placed most of the component footprints, putting my capacitors close to their ICs etc. I made sure I put everything close together to get a really compact board. 

## Routing
Today I also routed most of my tracks, with lots of vias, because the board is really small. I added a ground plane for thermal relief for the ESP32-C3 module as well. 

![](https://fabricate.hackclub-assets.com/65f1b4c5d85efef30aee66e19bc7199dc300e93ed449e72619ab35c93fbf644d/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/akN0A5WIrZ1s

**Total time spent: 2h 24m**

# October 29, 2026: Finished routing PCB and fixed some DRC errors
<!-- fabricate:entry 1509 -->

## Devlog #4!
*(28/10/2026)*
## Routing
I finished routing all the tracks and I cleaned up an annoying differential pair for the USB lines by moving some components. Nearly done...
## DRC Errors
OMG, so many DRC errors! I have thermal relief, connection and zone errors, silkscreen warnings, board clippings! I fixed a bunch of these, and supressed the unimportant ones (too many "silkscreen clipped by board edge"s!)
![](https://fabricate.hackclub-assets.com/516ef3b994441c22697e53841d353467e6ed6f387811c592f44eb8e95decbc5a/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/dv23xEKZbQdM

**Total time spent: 30m**

# October 29, 2026 (entry 2): Fixed DRC errors, PCB IS DONE!
<!-- fabricate:entry 1511 -->

## Devlog #5, PCB IS DONE!
## DRC Errors
WOW! So many DRC errors! Luckily, most of them were thermal and zone connection errors, making them easy (yet time-consuming) to fix. Today I fixed all of them and made sure my PCB was done!
## JLCPCB Part numbers
Today I also went through and found JLCPCB parts for each of the components in my BOM, making it perfectly ready for PCB assembly and production. I exported it using the Kicad JLCPCB Fabrication Plugin, making it easy with a one-click action!

![](https://fabricate.hackclub-assets.com/259c9a1a34f332826c566a2eda9dde97636908f81cb671d87214ba1b8da2099d/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/NqW1R0TfTtky

**Total time spent: 30m**

# November 1, 2026: Started redoing core with raw ESP32-C3-FH4 chip
<!-- fabricate:entry 1759 -->

## Devlog #6
## NOOOOO! 😭
Ok, so I checked the price of it, and it turns out that all ESP32 modules are classified as "Standard Only"* meaning I have to pay really expensive setup fees for X-Ray checks and stuff. 
![](https://fabricate.hackclub-assets.com/44292e0a10660ec4f9960ae8927815d2c9a7e96434f215d335f7c5f2223ad77c/image-png/image.png)
I have decided to redo most of it with the raw ESP32-C3-FH4 chip and a few other components, classified as "Economic or Standard" dropping it to more like $30 or $40 AUD for 2 (MOQ is 2 assembled out of 5 PCBs). 
## Redoing
So... I am getting rid of the module and trying my luck from the [ESP32-C3 Hardware Design Guidelines](https://documentation.espressif.com/esp-hardware-design-guidelines/en/latest/esp32c3/index.html) with the raw ESP32-C3 chip. This will also make it a lot smaller, which is great, and obviously cheaper.

Timelapse: https://lapse.hackclub.com/timelapse/BkvqHat12I-L

**Total time spent: 18m**

# November 4, 2026: Continued researching raw chip version
<!-- fabricate:entry 2114 -->

## Devlog #7
*Note: retrospective devlog for 1st of Nov 2026*
## Research
I have been doing heaps of research in the official Espressif Hardware docs and some prebuilt ones I have found for reference. Slowly, ever so slowly, I am getting towards the schematic being done!
![](https://fabricate.hackclub-assets.com/21367131c211673e69487137581000c8b483b4fd83c4833675c8e894264ef266/image-png/image.png)
*The Espressif Hardware Design Guidelines*
## Schematic
So far I am making slow progress on the schematic, as the Espressif Hardware documentation is kinda confusing (especially for a semi-beginner like me). I have found the chip I want (with inbuilt flash).

Timelapse: https://lapse.hackclub.com/timelapse/B_iAoif8P49O

**Total time spent: 42m**

# November 4, 2026 (entry 2): V1 Schematic!
<!-- fabricate:entry 2135 -->

## Devlog #8
Today I focused on getting a basic schematic done, even if there are some errors. I followed the basis of [TadeasFrycak/esp32-c3](https://github.com/TadeasFrycak/esp32-c3), and made a really messy, first draft. 

![](https://fabricate.hackclub-assets.com/126d2cead63352b6c57b9a74ede90ddabd8b145bef7ec6dc8fad38ea9d4a356e/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/b9ORL_VFW--z

**Total time spent: 42m**

# November 6, 2026: Finished V1 schematic
<!-- fabricate:entry 2216 -->

## Devlog #9
## Schematic V1 Finished!
**Yesterday** I finished the first draft of my schematic, using [```TadeasFrycak/esp32-c3```](https://github.com/TadeasFrycak/esp32-c3) as a basis for components and wiring, and getting Google Gemini to give me guidance and check my work for me. My BOM is looking nice and low, and it should cost well under the $50 budget I am aiming for. (Note: This is for 2 boards as JLCPCBs assembly MOQ is 2)
![Schematic V1](https://fabricate.hackclub-assets.com/ee7a56dd68e22acf98fe63b2fa23c9ce44338a5f47197c7e14bdc0538eb27c0b/image-png/image.png)
## Started PCB
**Yesterday** I also started laying out the PCB, importing my footprints and starting to place them. 
![](https://fabricate.hackclub-assets.com/dc0bb821385dd1d0cc044fe1e6615ef5da03a76f9ade0e2519f93e8bcbc0c4b5/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/Ac6m-NqxmWkl

**Total time spent: 30m**

# November 6, 2026 (entry 2): Continued laying out PCB
<!-- fabricate:entry 2217 -->

## Devlog #10
*Note: This is a split devlog since I accidentally did 2 lapse recordings.*
## PCB
**Yesterday** I did most of the layout for the PCB, building everything around the breadboard form-factor I need. I used Google Gemini and the ESP32-C3 Hardware Design Guidelines to give me advice on how to place my components. 
![](https://fabricate.hackclub-assets.com/caf0c459738793c3e8193ceb31b03f21f3fc37ac30b52129e8a56016ca425acd/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/0MWCxTrXx1Gv

**Total time spent: 42m**

# November 6, 2026 (entry 3): Did crystal and RF on PCB
<!-- fabricate:entry 2251 -->

## Devlog #11
## Crystal
Today I placed and routed the crystal, making a really compact layout. 
![](https://fabricate.hackclub-assets.com/3b7c2752d45a4c09cb787130bb3e41963a06f2dd82c925791714e7b9a850fdc2/image-png/image.png)
## RF
Today I also did the RF antenna placement and routing, making everything really compact and using Gemini to calculate my trace width. 
![](https://fabricate.hackclub-assets.com/2d5802efce79e690d18a98cb59773875ab0dfe373123d2ba0321c25ab9cccd85/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/YE8sZOfVNf49

**Total time spent: 1h 18m**

# November 7, 2026: Placed all components and started routing
<!-- fabricate:entry 2310 -->

## Devlog #12
## Layout
Today I finished (v1) placing all the components on the board, making a slim, long layout with tight components. I made the USB-C connector hang over the edge to access easily and tighten board size. 
![](https://fabricate.hackclub-assets.com/c79fca958762fd4907c3f1296c6d76c132c8fa2970cb1b9527f27591a7bfabe8/image-png/image.png)
![](https://fabricate.hackclub-assets.com/91ef826c64a64903571b09b23d27f31c3f6bf0aab6962aebdf7efb32803c1b95/image-png/image.png)
## Routing
Today I also started routing essentials on the PCB, such as USB lines and RF/crystal lines. I am getting a little worried about the hard to route pads on the RF side of the IC.

Timelapse: https://lapse.hackclub.com/timelapse/wq4adzkV8LrB

**Total time spent: 1h 12m**

# November 9, 2026: Continued routing and changed to 4 layer PCB
<!-- fabricate:entry 2414 -->

## Devlog #13
## Routing and 4 layers
Today I worked on routing all the components I placed last time. I had quite a bit of difficulty to route all the tight tracks, so I swapped to a 4 layer board, adding only ~$6 AUD! Now it is much easier to route all those tracks with layers:
* Layer 1 [F.Cu]: Components and signals traces
* Layer 2 [In1.Cu]: Fully unbroken GND plane
* Layer 3 [In2.Cu]: Power plane and power traces
* Layer 4 [B.Cu]: More signal traces, no components
![](https://fabricate.hackclub-assets.com/839477169bd97afd14145a29836439a25ed18ef5078463486fbfb98345bd48c1/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/xmJQqS-lmbj3

**Total time spent: 1h 36m**

# November 10, 2026: Finished routing and V2 PCB!
<!-- fabricate:entry 2524 -->

## Devlog #14
## Routing
Today I finished routing the PCB, and I am very happy with the result. Because I changed to 4 layers, there is a full, unbroken ground plane, and a full power (VDD3.3) plane as well. This means great signal integrity and ease of routing signals, being able to go on the top and the bottom. 
## *V2 DONE!*
**V2 PCB is done!!!** Today I got the V2* PCB done, with NO DRC errors (they are warnings...), and only a couple of things to check before moving on to the box. 
![](https://fabricate.hackclub-assets.com/0481b61997cd825d90d0e713c28de977942dbbf5b05643e04223c5fc21fee9ce/image-png/image.png)
**V2 because of the original issue with the module being very expensive, and then the restart*

Timelapse: https://lapse.hackclub.com/timelapse/FziYUUhOQGKB

**Total time spent: 1h**

# November 11, 2026: Filled out BOM and exported PCB
<!-- fabricate:entry 2588 -->

## Devlog #15
*Soooooo close!!!*
## BOM
Today I filled out my BOM with JLCPCB parts (0402 Caps and Resistors), getting it ready for production. I changed the original 0603 and 0805 parts to 0402 catalog numbers, to make it easy to upload. 
![](https://fabricate.hackclub-assets.com/4f93f8e425c6f7b0d4a119eca37e4196fd64bf9947ac4cb25f567d34aa09ddd5/image-png/image.png)
## Export
Today I also exported my gerbers, CPL and BOM for JLCPCB. I used the JLCPCB KiCAD Fabrication Toolkit to export in the right format easily and upload straight away. It is only going to cost about $30, which is well below the $50 budget I planned.

Timelapse: https://lapse.hackclub.com/timelapse/hFZsB1_rsUD_

**Total time spent: 42m**

# November 11, 2026 (entry 2): Refactored PCB
<!-- fabricate:entry 2604 -->

## Devlog #16
## Mostly done PCB!!!
**I think** the PCB is done! Today I worked on refactoring the PCB, changing the huge terminal blocks so small pin headers, and shortening the board heaps. I am very glad that the PCB will only cost ~$35 AUD, so it will be only half of the $50 USD (~$75 AUD) budget! Onto the case... Onshape, or fusion?
![](https://fabricate.hackclub-assets.com/1ad046e2b5d24094c3cd82f43f0f0e08d58e3b1e67ab02b55e3949b27e638855/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/gwxsWqWu5IIj

**Total time spent: 1h 6m**

# November 13, 2026: Added pin numbers and started learning OnShape
<!-- fabricate:entry 2750 -->

## Devlog #17
## PCB
*Yesterday* I added something that I accidentally forgot: pin numbers!
![](https://fabricate.hackclub-assets.com/47fa520114d5cf990806219e0e63861c8b42a38c2e2e1457d6296b0290d36c51/image-png/image.png)
## OnShape
I also started on the CAD, and I have decided to use OnShape, as it is free, online and very sophisticated. I started learning with the tutorial, and I imported my board. 
![](https://fabricate.hackclub-assets.com/8b2145957a97bc8861d4811178ce591db470b46f686cab017b196d4677d13668/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/t3OtFoqSPy18

**Total time spent: 1h 12m**

# November 16, 2026: Modelled case in OnShape
<!-- fabricate:entry 3124 -->

## Devlog #18
## 3D
Wow! I really needed to devlog earlier than this... this is all from last weekend. 
### Learning
Throughout my modelling, I was actually learning OnShape (and proper CAD) for the first time. I did one of the tutorials and then quickly picked up how everything works, making my design process quite easy. I also used AI Overview to tell me how to make a spiral shape for my button actuator. 
<br>
This is the bench vise model I worked on (I didn't make it...) in the tutorial. 
![](https://fabricate.hackclub-assets.com/91965ea9ddb6277bcacbd93c1526b466ce25aaa24592fee3df64e3a3ca828e2b/image-png/image.png)
### Box and Lid
I modelled the box and lid with 0.5mm tolerance around each side of the PCB, and made walls that were 2mm thick. The box is going to be very small, and will be versatile to hang on a screw in my garage. 
![](https://fabricate.hackclub-assets.com/eb434ff893f5c6a7d91875087a7ff35900b74ef29305c12e2a9bea4f309497fd/image-png/image.png)
### Buttons
The buttons were by far the most complicated part of the case, with the spiral flexible PiP spring being hard to model correctly. I used a bunch of 3 point arcs and made a spiral, then made it 0.7mm thick to flex when the buttons are pressed. 
![](https://fabricate.hackclub-assets.com/262da8c02ccb4f956a270cdad90d452968e536247bf62cbeaa4eb5aa87b18ee8/image-png/image.png)
### Hangar
I also added a standard screw hangar similar to ones found to hang items in shops, to mount it in my garage. 
![](https://fabricate.hackclub-assets.com/ca1a0023a90c8a1765efd86dd904fb24f6a397030d171ab474069bc199b91704/image-png/image.png)
## PCB
I also found that I had to change the width of my RF trace to make it be 50 ohm characteristic impedance. I used the JLCPCB impedance calculator, making it as accurate as possible. 
![](https://fabricate.hackclub-assets.com/f866befe1ce46c95e40ef19e4eefa1375f978e4be2d7c3ea378c9ad4dce25c0e/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/cHPrZi9NZFZx
Timelapse: https://lapse.hackclub.com/timelapse/88xKu2_ib-G5

**Total time spent: 5h**

# November 17, 2026: Made BOM
<!-- fabricate:entry 3249 -->

## Devlog #19
## BOM
This session I wrote my complete BOM in excel and put all my part numbers and prices in there. I imported this into Fabricate as well.
![](https://fabricate.hackclub-assets.com/6ff7b94fc75207adab37ab73dfe2eb065b5b30d83019997b8ae874cf3a7b4f44/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/A5zNmABPryNC

**Total time spent: 48m**

# November 19, 2026: Add Hackclub logo, fix prices in BOM, and write README
<!-- fabricate:entry 3435 -->

## Devlog #20
## Logo
In this session I added a Hackclub logo to the board and case, and on the board I made a reusable footprint of it I can use in other projects. 
![](https://fabricate.hackclub-assets.com/b311badb347b289a9a768aea76db5589a23c72c2ed1ed275cbfa7d7321330514/image-png/image.png)
## BOM
I also reuploaded my PCB and updated the BOM with transparent 3D printing price and PCB price. 
![](https://fabricate.hackclub-assets.com/145ca6a5b4a46221dfe222e5001475bacc21f96c8a233977705ceb4e3d4326e7/image-png/image.png)
## README
In this session I wrote the bulk of my README, without images, detailing inspiration, functionality and credits. 
![](https://fabricate.hackclub-assets.com/0d5514db35fc56a3aae86963ca9ad98458b397b598d4f8dd577b43e1fb8616bc/image-png/image.png)

Timelapse: https://lapse.hackclub.com/timelapse/XiISGWgdYC5D

**Total time spent: 1h 12m**
