# AGRI-SCOUT – Autonomous Agricultural Rover (In Progress)

## Overview
AGRI-SCOUT is an autonomous 6-wheel drive (6WD) agricultural rover designed to navigate between crop rows and monitor plant health without human intervention. The project focuses on replacing expensive industrial agricultural sensors with low-cost “virtual sensors” using computer vision and signal processing techniques.

## Problem Statement
Manual crop scouting is time-consuming, subjective, and not scalable for large fields. Existing precision agriculture tools such as nitrogen meters, pressure chambers, and RTK-GPS systems are costly and inaccessible to small-scale farmers.

## Proposed Solution
- GPS-free autonomous navigation using LiDAR-based tunnel (row-following) navigation
- Non-invasive virtual phenotyping instead of chemical or physical sensors
- Early detection of crop stress before visible damage occurs

## Navigation Methodology
- LiDAR measures left and right crop row distances
- Error calculated as difference between left and right distances
- PID controller adjusts steering
- MPU6050 gyroscope provides heading lock on uneven terrain
- Automatic stop when end of crop row is detected

## Virtual Sensor Methodology
### Virtual Nitrogen Sensor
- Uses Dark Green Color Index (DGCI)
- Converts RGB values to HSB color space
- Lower DGCI indicates nitrogen deficiency

### Virtual Wilting Sensor
- Uses Canny Edge Detection and Hough Transform
- Calculates leaf angle geometry
- Leaf drooping below 45° indicates water stress

### Virtual Disease Risk Sensor
- Uses Vapor Pressure Deficit (VPD) calculation
- Combines temperature and humidity data
- Low VPD (<0.4 kPa) predicts fungal disease risk

## Hardware Used
- 6WD rover chassis
- LiDAR sensor
- Camera module
- MPU6050 gyroscope
- Low-cost environmental sensors

## Software Used
- Raspberry Pi OS – main operating system
- Python – motor control, sensor interfacing, and system logic
- LiDAR driver libraries – distance measurement and navigation input
- OpenCV – camera-based image processing
- Basic control algorithms – steering correction and movement control

## Current Status
- Navigation logic defined
- Virtual sensing algorithms identified
- Hardware integration and testing in progress

## Key Advantages
- GPS-free navigation under dense crop canopy
- Non-destructive plant health monitoring
- Significant cost reduction compared to industrial solutions

## Note
This project is currently under development as a final-year project.
