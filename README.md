# How to use Arduino in automotive setting with display

## Power supply to safely power an Arduino from 12V lead acid battery
<img src="power-supply.png" width=50%>

The purpose of the parts in the power supply:

- 1A Fuse -  protects the circuit from failures
- 1N4002 diode - keeps large current drain spikes from getting to the Arduino and crashing it
- 1000uF capacitor - adds capacitance to the circuit
- 7805 voltage regulator - provides stable 5 volts and electrical noise rejection
- 100uF capacitor - extra stability for 7805

The fuse, diode and a large capacitor are necessary to keep the electrical noise to the minimum which can crash the running software and even damage the AVR chip.


## Measuring temperature from a generic thermistor type 2 pin coolant sensor

- Arduino Ground to black/white ground wire
- analog pin to (1k to 10k resistor) to sensor +volt output

## Links
- Sensor info [GM temps sensor writeup](https://forum.arduino.cc/index.php?topic=426410.0 "Link")
https://hackaday.io/project/168272-motorcycle-dashboard