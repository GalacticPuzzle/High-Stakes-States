#include "main.h"// IWYU pragma: keep
#include "lemlib/api.hpp" // IWYU pragma: keep
#include "../include/subsystems/drive.hpp"
#include "../include/subsystems/initbot.hpp"
#include "../include/subsystems/intake.hpp"
#include "../include/subsystems/air.hpp"
#include "pros/motors.h"
#include "pros/rtos.hpp" 
#include "../include/subsystems/lb.hpp"
#include <sys/_intsup.h>
#include "../include/subsystems/auton.hpp"


void redAuton(){
    mogoMech.set_value(false);
    chassis.setBrakeMode(pros::E_MOTOR_BRAKE_BRAKE);
    chassis.setPose(-58.135,42.876,90);

    chassis.turnToHeading(300,1500,{},false);
    chassis.moveToPoint(-31.356, -2.648, 1500,{.forwards=false,.maxSpeed=50},false);
    mogoMech.set_value(true);
    chassis.turnToHeading(14, 1000,{},false);
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    chassis.moveToPoint(-25.221, 42.246, 1500,{},false);
    chassis.turnToHeading(82, 1500,{},false);
    chassis.moveToPoint(-9.962, 43.759, 1500,{},false);
    chassis.moveToPoint(-16.262, 43.507, 1500,{.forwards=false},false);
    chassis.turnToHeading(56.8, 1500,{},false);
    chassis.moveToPoint(-10.971, 48.173, 1500,{},false);
    chassis.moveToPoint(-16.262, 43.507, 1500,{.forwards=false},false);
    chassis.turnToHeading(175.6, 1000);
    chassis.turnToPoint(-13.493, 13.62, 1500,{},false);

    

}

void redAWP(){
  
    chassis.setBrakeMode(pros::E_MOTOR_BRAKE_BRAKE);
          mogoMech.set_value(false);

    chassis.setPose(-60,-14,0);
    chassis.moveToPoint(-60, 0, 1000,{},false);
    chassis.turnToHeading(90, 1000,{},false);
    ConveyorMotor.move(127);
    IntakeMotor.move(127);
    pros::delay(500);
    chassis.moveToPoint(-45.5, 0, 1500,{},true);
    pros::delay(750);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    chassis.turnToHeading(135,1000,{},false);
    chassis.moveToPoint(-26.366, -23.859, 1500,{.forwards=false,.maxSpeed=50},false);
    mogoMech.set_value(true);

    IntakeMotor.move(127);
    ConveyorMotor.move(127);

    chassis.turnToHeading(180, 1000,{},false);
    chassis.moveToPoint(-23.595,-45.853,1500,{},false);
    pros::delay(400);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    chassis.turnToHeading(10, 1000,{},false);
    chassis.moveToPoint(-12.165, -12.45, 1500,{},false);

    
    


}

void blueAuton(){
  chassis.setBrakeMode(pros::E_MOTOR_BRAKE_BRAKE);
  chassis.setPose(58.64,48.299,58.5);
  chassis.moveToPoint(30.896, 28.374, 1500, {.forwards=false,.maxSpeed=50},false);
  chassis.waitUntilDone();
  mogoMech.set_value(true);
  pros::delay(300);
  chassis.turnToHeading(349, 1500,{},false);
  IntakeMotor.move(127);
  ConveyorMotor.move(127);
  chassis.moveToPoint(24.848, 41.742, 1500,{},false);
  pros::delay(500);
  chassis.turnToHeading(275.5, 1000,{},false);
  chassis.moveToPoint(9.715, 42.877, 1500, {},false);
  pros::delay(500);
  chassis.moveToPoint(13.372, 42.625, 1500,{.forwards = false},false);
  chassis.turnToHeading(335.8, 1000,{},false);
  chassis.moveToPoint(10.724,48.678,1500,{},false);
  chassis.moveToPoint(13.372, 42.625, 1500,{.forwards=false},false);
  chassis.turnToHeading(184.4, 1000,{},false);
  chassis.moveToPoint(11.985, 12.989, 1500,{},false);


  

}
void blueAWP(){

}

void skills(){

    //AGAIN??
    chassis.setBrakeMode(pros::E_MOTOR_BRAKE_BRAKE);
          mogoMech.set_value(false);

    chassis.setPose(-59.637,0,90);
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    pros::delay(500);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    //alliance stake

    chassis.moveToPoint(-46,0,1000,{},false);
    chassis.turnToHeading(5, 1000,{},false);
    
    chassis.moveToPoint(-46, -24, 2500, {.forwards=false,.maxSpeed=40},false);
      chassis.waitUntilDone();

    mogoMech.set_value(true);
    pros::delay(300);
//mogo grabbed

    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    chassis.turnToHeading(90, 1000, {},false);
    chassis.moveToPoint(-22, -24, 1000,{},false);
    chassis.turnToHeading(180, 1000,{},false);
    chassis.moveToPoint(-22, -47, 1000,{},false);
    chassis.turnToHeading(270, 1000,{},false);
    chassis.moveToPoint(-56.869, -47, 2500,{},false);
    chassis.turnToHeading(135,1000,{},false);
    chassis.moveToPoint(-47.915, -58.301, 1500,{},false);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    chassis.turnToHeading(70, 1000,{},false);
    //first ring set

    pros::delay(150);
    mogoMech.set_value(false);
    pros::delay(300);
    chassis.moveToPoint(-65, -65, 1500,{.forwards=false,.maxSpeed=20},false);
    //first mogo corner

    chassis.moveToPoint(-51.951, -36.823, 2000,{},false);
    chassis.turnToHeading(210, 1000,{},false);
    chassis.moveToPoint(-50.186, 9, 1500,{.forwards=false},false);
    chassis.moveToPoint(-50.186,22.952,1500,{.forwards=false,.maxSpeed=40},false);
      chassis.waitUntilDone();
      pros::delay(300);

    mogoMech.set_value(true);
    pros::delay(500);
    chassis.turnToHeading(90, 1000,{},false);
    chassis.moveToPoint(-23.683,23.51,1500,{},false);
    chassis.turnToHeading(0,1000,{},false);
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    pros::delay(300);
    chassis.moveToPoint(-23.683, 47, 1000,{},false);
    chassis.turnToHeading(270, 1000,{},false);
    chassis.moveToPoint(-59.5, 47, 1500,{},false);
    chassis.turnToHeading(160, 1000,{},false);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    pros::delay(300);
    mogoMech.set_value(false);
    chassis.moveToPoint(-65, 65, 1500,{.forwards=false},false);
    chassis.turnToHeading(90, 1000,{},false);
    IntakeMotor.move(127);
    chassis.moveToPoint(-45.448, 56.264, 1500,{},false);
    chassis.moveToPoint(47.273, 28.18, 2000,{},false);
    IntakeMotor.move(0);
    chassis.moveToPoint(45.292, 28.698, 1500,{},false);
    chassis.turnToHeading(0, 1000,{},false);
    chassis.moveToPoint(45.292, 1.5, 1500,{.forwards=false,.maxSpeed=40},false);
      chassis.waitUntilDone();

    mogoMech.set_value(true);
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    chassis.moveToPoint(47.313,39.304,1500,{},false);
    pros::delay(300);
    chassis.turnToHeading(50, 1000,{},false);
    chassis.moveToPoint(53.377,42.972,1000,{},false);
    pros::delay(300);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    pros::delay(300);
    IntakeMotor.move(-127);
    doinker.set_value(true);
    chassis.turnToPoint(65,65,1500,{.forwards=false},false);
    pros::delay(100);
    doinker.set_value(false);
    mogoMech.set_value(false);
    chassis.moveToPoint(65, 65, 1500,{.forwards=false},false);
    chassis.moveToPoint(58.9, 55.346, 1500,{},false);
    chassis.turnToHeading(180, 1000,{},false);
    chassis.moveToPoint(58.573, -42.629, 3000,{},false);
    doinker.set_value(true);
    chassis.moveToPoint(65,-65,1000,{},false);



    

    
    
















   /* 
    chassis.setBrakeMode(pros::E_MOTOR_BRAKE_BRAKE); 

    // JERRY PATH PRAY IT WORKS PLSPLSPLSPLSLSSLPSLS
    //SKILLS PROG!
    chassis.setPose(-62, 0,90);
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    pros::delay(1000);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    //Scored on alliance stake
    chassis.moveToPoint(-47.538,-0.252, 1000);
    chassis.waitUntilDone();
    chassis.turnToPoint(-58.8, -19.5, 1000, {.forwards = false});
    chassis.waitUntilDone();
    chassis.moveToPoint(-58.8,-19.5, 1500,{.forwards = false, .maxSpeed = 40});
    chassis.waitUntilDone();
    mogoMech.set_value(true);
    chassis.waitUntilDone();
    pros::delay(750);

    // //Clamped first mogo
    chassis.turnToPoint(-23, -23.45, 1000);
     IntakeMotor.move(127);
    ConveyorMotor.move(127);
    chassis.moveToPoint(-23, -23.45, 2500, {.maxSpeed = 70});
    chassis.waitUntilDone();
    pros::delay(150);
    //second ring
    chassis.turnToPoint(-26.356, -50.416, 1000);
    chassis.moveToPoint(-26.356, -50.416, 2500, {.maxSpeed = 70});
    chassis.waitUntilDone();
    pros::delay(150);
    chassis.turnToPoint(-52.082, -46.6, 1000);
    chassis.moveToPoint(-52.082, -46.6, 1500);
    chassis.waitUntilDone();
    chassis.turnToPoint(-68.4, -46.9, 1000);
    chassis.moveToPoint(-68.4, -46.9, 1500);
    chassis.turnToPoint(-44.02 , -64.036, 1000);
    chassis.moveToPoint(-44.02 , -64.036, 1500);
    chassis.waitUntilDone();
    pros::delay(300);
    IntakeMotor.move(0);
    ConveyorMotor.move(0);
    chassis.turnToPoint(-67.954,-64.567,1000,{.forwards=false});
    chassis.moveToPoint(-67.954, -64.567, 2000,{.forwards=false});
    mogoMech.set_value(false);
    // chassis.turnToPoint(-59.397,-59.018, 750);
    // chassis.moveToPoint(-59.397, -59.018, 500);
    // chassis.moveToPoint(-67.954, -64.567, 1000,{.forwards=false});
    chassis.turnToPoint(-47.038, -46.66, 1500);
    chassis.moveToPoint(-47.038, -46.66, 1500);

    chassis.turnToPoint(-47.29, 23.96, 2500, {.forwards=false});
    chassis.moveToPoint(-47.29, 23.96, 3500,{.forwards=false, .maxSpeed=60});
    chassis.waitUntilDone();
    mogoMech.set_value(true);
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    chassis.turnToPoint(-47.29, 64.819, 1500);
    chassis.moveToPoint(-47.29, 64.918, 2000);
    chassis.turnToPoint(-66.206, 66.332, 1500,{.forwards=false});
    chassis.moveToPoint(-66.206, 66.332, 1500,{.forwards=false});
    mogoMech.set_value(false);



    // //FIRST MOGO IN CORNER, 5 RINGS SCORED










    /*
    IntakeMotor.move(127);
    ConveyorMotor.move(127);
    chassis.moveToPoint(-26.609, -45.651, 2500);
    chassis.waitUntilDone();
    //first ring
    chassis.turnToPoint(-23.5, -49.938, 2500);
    chassis.moveToPoint(-23.5, -49.938, 2500);
    //second ring
    chassis.turnToPoint(-45, -45, 2500);
    chassis.waitUntilDone();
    chassis.moveToPoint(-58, -56, 2500);
    //third and forth ring
    chassis.turnToPoint(-45, -60, 1000);
    chassis.waitUntilDone();
    chassis.moveToPoint(-45, -60, 1500);

    chassis.turnToPoint(-65, -64, 1000, {.forwards = false});
    chassis.moveToPoint(-65, -64, 2500, {.forwards=false});
    */
    //corner 1





}

void (*autonFunctions[])() = {redAuton, redAWP, blueAuton,blueAWP, skills};

int autonSelect = 1;
std::string autonNames[5] = {"redAuton","redAWP", "blueAuton","blueAWP", "skills"};

void previousAuton() {
  if (autonSelect == 0) {
    autonSelect = sizeof(autonNames) / sizeof(autonNames[0]) - 1;
  } else {
    autonSelect--;
  }
  pros::lcd::set_text(0, "Auton Selected = " + autonNames[autonSelect]);
}

void nextAuton() {
  if (autonSelect == sizeof(autonNames) / sizeof(autonNames[0]) - 1) {
    autonSelect = 0;
  } else {
    autonSelect++;
  }
  pros::lcd::set_text(0, "Auton Selected = " + autonNames[autonSelect]);
}