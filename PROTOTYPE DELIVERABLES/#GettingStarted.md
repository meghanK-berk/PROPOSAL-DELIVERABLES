# Prototype

This project involves using an ultrasonic sensor, three flex sensors, and a button to detect distances, measure flexion, and trigger actions.

The max patch consists of 3 elements at it's current state. One granulator instrument. A Kick and snare and a reverb. You can control the reverb amount and length with the sensor. You can play with the wet  values of your patch with the flex sensor. The button object will be used to turn on or off the output. You can play with the the kick and snare with the other 2 flex sensors. 


## Table of Contents
- [Installation](#installation)
- [Hardware](#Hardwarereq)
- [Features]



## Installation
Download Max patch
You will need to have arduino ide ready to flash


## Hardware Requirements
1. Ultrasonic Sensor:
Trig Pin is set to Pin 9, and Echo Pin is set to Pin 10 — 

2. Flex Sensors:
There are 3 sensors, check if they are correctly defined.
The minFlexValue and maxFlexValue constants should be adjusted based on the actual readings you get from the flex sensors when they are at their straightest and most bent positions. Please bend them accurately. 

3. Button:
The button uses an internal pull-up resistor (INPUT_PULLUP mode), which is perfect for detecting a LOW state when pressed (since the other leg of the button is connected to GND).


# Instructions
Load a sample on your granulator and play around with the percussion elements and delay/reverb for some ambient music. 

Find more details in the UserManual.md!



 

 



