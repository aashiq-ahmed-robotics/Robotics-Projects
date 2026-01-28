# Maze Solving Robot using Dijkstra’s Algorithm

## Overview
This project implements a maze-solving robot that uses Dijkstra’s algorithm to determine the shortest path from a start point to a destination.

## Concept
- The maze is represented as a graph
- Each intersection is treated as a node
- Paths between nodes are edges with weights
- Dijkstra’s algorithm computes the shortest path

## Hardware Used
- Arduino UNO
- IR sensors
- Motor driver
- DC motors

## Software
- Platform: Arduino IDE
- Language: C++
- Algorithm: Dijkstra’s shortest path
- Control: Basic PID for smooth movement

## Code
- `maze_solver.ino` – Core path planning and logic implementation

## Outcome
The robot successfully navigates the maze using logical path planning instead of random movement.

## Limitations
-Maze structure must be predefined or mapped beforehand

-Sensor noise can affect decision making

-Not optimized for dynamic or changing mazes
