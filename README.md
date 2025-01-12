# ESP32SSR V1.0
ESP32 Solid State Relay PCB Development

This board was created intially for use with an ESP32 in mind but can also be used with Raspberry Pi boards with the correct configuration.

It is for low power switching of momentary switches.

As it is only to be utilised with low power devices, the need for circuit protection is not used in this variant until testing is complete.
This may change going forward.

It cannot be used for switching of larger current AC/DC devices.

It utilises the following components

- 4 x BC547A NPN Transistors - 0.1A Ic, 45V Vce, Small Signal NPN Transistor, TO-92
- 4 x CPC1017N SSR - Form A, Solid State Relay (Photo MOSFET) 60V, 0.1A, 16Ohm, SO-4
- 4 x 3mm Red LED - These can be changed taking into account Vf
- 4 x 160 Ohm 1/4 Watt Resistors - Dependent on LED Type

Files -

- ESP32SSR-Circuit-Diagram.jpg - V1.0 Circuit Diagram
- ESP32SSR.rar - Gerber Files
- ESP32SSR.jpg - 3D Render of Circuit Board
- media-3322539.pdf - CPC1017N Datasheet
- 50-0296.pdf - BC547B Datasheet
- led_blink.ino - Sketch file for testing Relay Board



**Potential Changes in V1.1**

- Move SSR to back of PCB allowing for shrinking of the PCB
- Change both LED & Resistors to Surface mount
- Add base resistor to transistor to protect I/O pin of ESP
