#include "main.h"// IWYU pragma: keep
#include "lemlib/api.hpp" // IWYU pragma: keep
#include "../include/subsystems/drive.hpp"
#include "../include/subsystems/initbot.hpp"
#include "../include/subsystems/intake.hpp"
#include "../include/subsystems/air.hpp"
#include "pros/misc.h"
#include "pros/rtos.hpp"
#include "../include/subsystems/lb.hpp"
#include "../include/subsystems/auton.hpp"




pros::Controller controller(pros::E_CONTROLLER_MASTER);

/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */


/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.

 
 */


void initialize() {
    pros::lcd::initialize(); // initialize brain screen
    chassis.calibrate();
    pros::delay(5000); //give time for imu to calibrate
    pros::lcd::set_text(0, "Auton Selected = " + autonNames[autonSelect]);

    pros::lcd::register_btn0_cb(previousAuton);
    pros::lcd::register_btn2_cb(nextAuton);


    // chassis.calibrate(); // calibrate sensors
}

/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {
     pros::Task screen_task([&]() {
        while (true) {
            // Combine position data onto one line
            pros::lcd::print(1, "X:%.1f Y:%.1f T:%.1f", 
                           chassis.getPose().x,
                           chassis.getPose().y,
                           chassis.getPose().theta);
        
            pros::delay(25);
        }
    });
}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */
void autonomous() {

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

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 
 */


void opcontrol() {
	while (true) {
    pros::lcd::print(1, "X:%.1f Y:%.1f T:%.1f", 
                           chassis.getPose().x,
                           chassis.getPose().y,
                           chassis.getPose().theta);
    tankDrive();
    Intakerun();
    grab();
	doink();
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP)) {
			nextState();
		}

    pros::delay(20); 
	}
}