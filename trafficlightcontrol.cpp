// Purpose: Traffic Light Control System Simulation

#include <iostream>
using namespace std;

//Declare trafficLightControl function here with parameters
bool trafficLightControl (bool carDedected, bool timerCondition, bool pedestrianCrossing );


int main() {
    //Variable declaration in main
    bool carDedected, timerCondition, pedestrianCrossing;
    bool greenLight;
    char choice;
    
    do {
        //Prompt the user to input a bool value for carDedected
        cout << "Is the car dedected? (1 for Yes, 0 for No): ";
        cin >> carDedected;

        //Prompt the user to input a bool value for timerCondition
        cout << "Is the timer condition allowing? (1 for Yes, 0 for No): ";
        cin >> timerCondition;
        
        //Prompt the user to input a bool value for pedestrianCrossing
        cout << "Is a pedestrian crossing? (1 for Yes, 0 for No): ";
        cin >> pedestrianCrossing;
        
        //Call the trafficLightControl function with necessary arguments
        //Use the if/else statement to determine if the traffic light should turn green given the condition
        if (trafficLightControl( carDedected, timerCondition, pedestrianCrossing)) {
            cout << "Result: Traffic light is GREEN (Cars can go).\n";
        }
        else {
            cout << "Result: Traffic light is RED (Cars must stop).\n";
        }
        
        //Give the user a choice to test another case
        cout << "Do you want to try again?(y/n): ";
        cin >> choice;
      
    } while (choice == 'y' || choice == 'Y');
    return 0;
}

//trafficLightCondition function containing code to determine if the traffic light should turn green
bool trafficLightControl(bool carDedected, bool timerCondition, bool pedestrianCrossing) {
    return (carDedected || timerCondition) && (!pedestrianCrossing); //Light turns green if car is dedected OR timer is allowing AND no pedestrians
}