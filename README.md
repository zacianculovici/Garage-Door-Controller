# Garage-Door-Controller

![Hackatime Stats](https://hackatime.hackclub.com/api/v1/badge/U0BMLT1CFB3/zacianculovici/Garage-Door-Controller) [![View PCB on KiCanvas](https://hack.club/pcb-badge)](https://kicanvas.org/?repo=https://github.com/zacianculovici/Garage-Door-Controller/tree/main/PCB)

## What it is
An ESP32-C3 based bluetooth controller for an old B&amp;D roller door. Also works as a standard devboard. 
![GDC](https://cdn.hackclub.com/01a1f2cf-d03e-7a94-9696-084efce30339/paste-1795075065074.png)
## Inspiration
I started this project because I had an old roller door and the remote was playing up. I prototyped it with a normal ESP32 on a breadboard, and decided to make a better version on one PCB with a case. I am both nervous and excited to get it made as I have never made a proper PCB this complicated before. 
## Parts
### Schematics
Garage-Door-Controller is essentially just a ESP32-C3 devboard, with an on-board optocoupler to short the pins of the up/down button on the roller door. Because JLCPCB has a minumum PCB assembly quantity of 2, I plan to use one as the controller, and the other as a normal devboard with an inbuilt optocoupler. 
![Schematic](https://cdn.hackclub.com/01a1f2d0-8aba-7951-967c-6f186b653c00/paste-1795075114868.png)
### PCB
The PCB is designed to be as small as possible, and it is really just a standard ESP32-C3 devboard that I designed, but I added two mounting holes and two sets of pin headers which is a bit custom. 
![PCB](https://cdn.hackclub.com/01a1f2d0-e563-77bf-ab2f-39284744c89e/paste-1795075137960.png)
### Case
The case is a simple 3D printed case, and I decided to make it translucent because it will look really nice. I made flexible button actuators and a screw wall hanger, and it will be screwed together with M3 bolts and heatset inserts. 
![Box](https://cdn.hackclub.com/01a1f2d1-6367-7050-b373-dad53a8042fc/paste-1795075170231.png)
![Lid](https://cdn.hackclub.com/01a1f2d1-af79-7b85-b236-50827557e5ed/paste-1795075189708.png)
![Lid Spring Closeup](https://cdn.hackclub.com/01a1f2d1-ed6f-7ea2-b118-974e8c09ded1/paste-1795075204729.png)
## Credits
### AI Usage
While I did use a small amount of AI, this project has <sub>![Hackatime Stats](https://hackatime.hackclub.com/api/v1/badge/U0BMLT1CFB3/zacianculovici/Garage-Door-Controller)</sub> of my own work put into it and I am really proud of it. I used Google Gemini to explain how to make most of the schematic, as I have never done anything like this before, and I needed help understanding the official guidelines as they are confusing to a beginner. It also helped me with some layout tips, like how to place things so they are easy to route. Other than that, I did everything else: schematic, layout and routing, etc. 

---
<sup><sub>2026 - Zac Ianculovici | [Contact](mailto:zachary.ianculovici@gmail.com) | [Slack](https://hackclub.enterprise.slack.com/team/U0BMLT1CFB3)</sub></sup>
