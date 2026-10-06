# Traffic-Light-Control-Simulation
The objective of the Traffic Light Simulation is to use propositional logic to emulate the decision-making process of traffic flow based on three critical conditions: presence of a car, pedestrian crossing, and timer status. The user is able to input up to 3 Boolean values for each condition. A trafficLightControl function is implemented to represent a well-formed formula. In order to test multiple cases, a do while loop is used. 

｡ﾟ•┈୨♡୧┈• ｡ﾟ
# Features
- Uses a traffic control function that implements the well-formed formula:  (C ∨ T) ∧ P'
- Allows users to input Boolean values for presence of a car, pedestrian crossing, and timer status
- Do while loop to repeat simulations
- Displays whether the light should turn green or red based on user input

｡ﾟ•┈୨♡୧┈• ｡ﾟ
# Technologies 
- C++

# Propositional Variables in depth
This program uses 3 propositional variables which represent different meanings.

C: Car is detected
P: Pedestrian is crossing
T: Timer condition allows for a green light

The goal is to implement the well-formed formula: (C ∨ T) ∧ P' for decision making in the code.
The light MUST ONLY turn GREEN when: there is a car detected OR pedestrian is crossing AND when there are NO pedestrians present.
Otherwise, the result would be catastrophic in a real-life sense if the condition was made incorrectly. We wouldn't want the traffic light to turn green when a pedestrian is present.

｡ﾟ•┈୨♡୧┈• ｡ﾟ
# How to run
Compile and run a C++ "trafficlightcontrol.cpp" using a C++ compiler 


