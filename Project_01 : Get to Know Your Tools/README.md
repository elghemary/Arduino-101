# Get to Know Your Tools

All my sketches are drawen using [ThinkerCad](https://www.tinkercad.com).

For further details, Theory and flashcards, see [my notes](https://www.remnote.com/a/Project_01-%253A-Get-to-Know-Your-Tools%253A/64a0d2fc50a5318802ab7995).

## Overview
The first project is all about discovering the kit components and learning basic electrical theory

## Materials Required
- Arduino Uno
- BreadBoard
- LEDs
- Resistors (220 ohm)
- switchs

## Experiment 01 : Lighting a LED
### Schematic Diagrams
![Project_01](https://github.com/elghemary/Arduino-101/blob/main/Project_01%20%3A%20Get%20to%20Know%20Your%20Tools/project_01.png)

## Insights
- A LED is a light-emitting diode, it's a polarized component. The longer leg is the anode and it connect to power (+), and the other one is the cathode and it connects to ground (- / GND).
- A resistor resists the flow of electricity, and ensures that the LED receives enough voltage and doesn't burn out.

## Experiment 02: Using a switch
### Schematic
![](https://github.com/elghemary/Arduino-101/blob/main/Project_01%20%3A%20Get%20to%20Know%20Your%20Tools/project_01_B.png)

### Insights 
- The switch interrupt the flow of electricity, breaking the circuit when open and completes it when closed.


## Experiment 03 : Series Circuits
### Schematic
![](https://github.com/elghemary/Arduino-101/blob/main/Project_01%20%3A%20Get%20to%20Know%20Your%20Tools/project_01_C.png)

### Insights
the switches are in series, which means that the electricity flows through both componens before flowing into the LED, in order to light it up we need to press both switches. A good analogy to think about it is that this circuit acts like an AND gate ( this analogy is not striclty correct ).


## Experiment 04 : Parallel Circuits
### Schematic
![](https://github.com/elghemary/Arduino-101/blob/main/Project_01%20%3A%20Get%20to%20Know%20Your%20Tools/project_01_D.png)

### Insights
Now the switches are wire up in parallel, as a result we don't need to push them both to light up the LED. By pressing either switches, the electricity flows through the closed circuit and light up the LED. Again a good analogy is that this ircuit acts like an OR gate ( it is not a stricly correct equivalence).
