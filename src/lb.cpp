#include "subsystems\lb.hpp"
#include "lemlib/api.hpp" // IWYU pragma: keep
#include "main.h" // IWYU pragma: keep
#include "../include/subsystems/initbot.hpp"
#include "pros/misc.h" // IWYU pragma: keep
#include "pros/rtos.hpp" // IWYU pragma: keep



const int numStates = 3;

int states[numStates] = {0,17,135};
int currState = 0;
int target = 0;

void nextState(){
    currState+=1;
    if(currState == numStates){
        currState = 0;
    }
    target = states[currState];
}

void liftControl(){
    double kp = 2.75;
    double error = target - arm_sensor.get_position();
}

void setArmPosition(int targetDegrees){
    target = targetDegrees;
}

