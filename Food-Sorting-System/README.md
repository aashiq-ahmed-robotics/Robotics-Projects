# Food Sorting System using Shape Detection

## Overview
This project automates food sorting in processing industries using basic computer vision techniques. Items are sorted based on shape to identify broken or defective products.

## Working Principle
- Camera captures images of food items
- Images are processed using OpenCV
- Edge detection is applied
- Shape features are analyzed
- Defective items are identified

## Hardware & Tools
- Raspberry Pi
- Camera module
- Conveyor belt with DC motor

## Software
- Python
- OpenCV
- Canny Edge Detection

## Code
- `shape_sorting.py` – Image processing and defect detection logic

## Limitations
- Performance depends on consistent lighting
- Overlapping items are difficult to detect
- Motion blur affects accuracy at higher speeds
- Limited to shape-based sorting only
