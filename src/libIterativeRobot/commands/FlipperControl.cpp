#include "libIterativeRobot/commands/FlipperControl.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

FlipperControl::FlipperControl() {
  requires(Robot::flipper);
  this->priority = 2;
}

bool FlipperControl::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void FlipperControl::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  // printf("Flipper control initialized\n");
  //Robot::flipper->disablePID();
  //printf("Flipper control initialized\n");
}

void FlipperControl::execute() {
  //printf("Flipper control running\n");
  Robot::flipper->move(Robot::partnerController->get_analog(pros::E_CONTROLLER_ANALOG_RIGHT_Y));
}

bool FlipperControl::isFinished() {
  return true;
}

void FlipperControl::end() {
  // Code that runs when isFinished() returns true.
  //Robot::flipper->lock();
}

void FlipperControl::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}
