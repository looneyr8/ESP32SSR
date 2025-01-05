# ESP32SSR V1.0
ESP32 Solid State Relay PCB Devolpment

This board was created intially for use with an ESP32 in mind but can also be used with Raspberry Pi boards with the correct configuration.

It is for low power switching of momentary switches.

As it is only to be utilised with low power devices, the need for circuit protection is not used in this variant until testing is complete.
This may change going forward.

It cannot be used for switching of larger current AC/DC devices.

It utilises the following components

4 x BC550 NPN Transistors - 0.1A Ic, 45V Vce, Small Signal NPN Transistor, TO-92

4 x CPC1017N SSR - Form A, Solid State Relay (Photo MOSFET) 60V, 0.1A, 16Ohm, SO-4

4 x 3mm Red LED - These can be changed taking into account Vf

4 x 160 Ohm 1/4 Watt Resistors - Dependent on LED Type

