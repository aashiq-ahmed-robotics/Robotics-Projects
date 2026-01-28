# Maze Solving Robot using Dijkstra’s Algorithm

## Overview
This project implements a maze-solving robot that uses Dijkstra’s algorithm to compute the shortest path from a start point to a goal. The maze is modeled as a graph where intersections represent nodes and paths represent edges.

## Algorithm Used
- Dijkstra’s shortest path algorithm
- Priority queue / adjacency matrix for cost calculation

## Navigation Approach
- Maze converted into graph structure
- Robot maps paths using IR sensors
- Algorithm selects optimal path
- PID control ensures smooth motion

## Hardware Used
- Arduino UNO
- IR sensors
- Motor driver
- DC motors

## Software Implementation
- Programming language: C++ (Arduino IDE)
- Control: PID for movement stability

## Outcome
The robot successfully navigates the maze using logical path planning rather than random or brute-force movement, demonstrating algorithm-based autonomous decision making.
