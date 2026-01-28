# Autonomous Vehicle and Smart Traffic Signal System (V2I)

## Overview
This project demonstrates a basic Vehicle-to-Infrastructure (V2I) communication system using two ESP32 microcontrollers. One ESP32 controls a traffic signal, and the other controls a vehicle that reacts to the signal state in real time.

## How the System Works
- Traffic signal ESP32 broadcasts the current signal state wirelessly
- Vehicle ESP32 receives the signal data
- Vehicle motion is controlled based on the signal:
  - Red: Stop
  - Yellow: Slow down
  - Green: Move forward

## Hardware Used
- ESP32 (2 units)
- L298N motor driver
- DC motors
- Traffic signal LEDs
- Robot chassis

## Software
- Platform: Arduino IDE
- Language: Embedded C / C++
- Communication: Wi-Fi

## Code
- `vehicle_controller.ino` – Vehicle-side control logic
- Signal controller code sends signal states wirelessly

## Limitations
- Uses Wi-Fi/Bluetooth instead of standard V2I protocols
- Limited communication range
- Designed for single vehicle and signal
- No obstacle or pedestrian detection
- Tested only in controlled environments

## Project Type
Academic prototype demonstrating embedded communication and control logic.

## Note
Code provided is a sample code not the complete code
