# Smart Vehicle Prototype – V2I Communication

## Overview
This project demonstrates a basic Vehicle-to-Infrastructure (V2I) communication concept using two ESP32 modules.

## System Description
- One ESP32 simulates a traffic signal
- Another ESP32 is mounted on the vehicle
- Communication is done using Wi-Fi
- When the signal turns green, the vehicle starts moving automatically

## Hardware Used
- ESP32 (2 units)
- Motor driver
- DC motors
- Power supply

## Software & Logic
- Embedded C
- Wi-Fi based data transmission
- Simple decision logic based on signal state

## Outcome
The system successfully demonstrated how external infrastructure signals can influence autonomous vehicle movement in a controlled environment.

## Limitations
- Prototype-level implementation
- Wi-Fi used instead of standard V2I protocols
