
# Raylib Buttons Tutorial

This repository contains the code for a video tutorial on creating and using buttons in a Raylib project in C++.

## Video Tutorial

<p align="center">
  <img src="preview.jpg" alt="Preview" width="940">
</p>

<p align="center">
🎥 <a href="https://youtu.be/0Ct9ZWEUm7M">Video Tutorial on YouTube</a>
</p>

## Overview

In this tutorial, we build a basic Raylib application that demonstrates how to create and use buttons. The tutorial covers setting up the Raylib window, creating button objects, detecting button presses, and handling button events.

## Features

- **Raylib Window Setup:** Initialize a Raylib window with a specified width and height.
- **Buttons:** Create and display interactive buttons that respond to user inputs.
- **Event Handling:** Detect button presses and perform actions based on those events.
- **Visual Feedback:** Visual representation of buttons and their states.

## Code Structure

- **main.cpp:** The main script that initializes the Raylib window, handles events, checks for button presses, and renders the game objects.
- **button.hpp:** Header file containing the `Button` class definition.
- **button.cpp:** Source file containing the implementation of the `Button` class methods.

## How to Run

1. Clone this repository:
   ```bash
   git clone https://github.com/educ8s/raylib-buttons-tutorial.git
   cd raylib-buttons-tutorial
   ```

2. Ensure you have C++ and Raylib installed. You can follow the installation instructions on the [Raylib official website](https://www.raylib.com/).

3. Place your button images and background image in the `Graphics` directory.

4. Compile the code:
   ```bash
   g++ main.cpp button.cpp -o main -lraylib
   ```

5. Run the compiled program:
   ```bash
   ./main
   ```

## Usage

- Run the program and a window titled "Raylib Buttons Tutorial" will appear.
- The start button and exit button will be displayed.
- Clicking the start button will print "Start Button pressed" to the console.
- Clicking the exit button will close the Raylib window and exit the program.

## Dependencies

- C++
- Raylib

## Contributing

Contributions are welcome! Please open an issue or submit a pull request if you have any suggestions or improvements.
