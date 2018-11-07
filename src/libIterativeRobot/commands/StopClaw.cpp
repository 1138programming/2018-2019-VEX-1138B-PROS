#include "libIterativeRobot/commands/StopClaw.h"
#include "libIterativeRobot/Robot.h"
#include "Constants.h"

StopClaw::StopClaw() {
  requires(Robot::claw);
  this->priority = DefaultCommandPriority; // Lowest priority
}

bool StopClaw::canRun() {
  return true; // This is the default value anyways, so this method can be removed
}

void StopClaw::initialize() {
  // Perform any initialization steps for this command here, not in the
  // constructor
  //Robot::claw->move(0);
  Robot::claw->setSetpointRelative(0);
  Robot::claw->enablePID();
}

void StopClaw::execute() {
  //Robot::claw->move(0);
  //printf("Stopping claw\n");
  //printf("Claw encoder value is %d, claw target is %d\n", Robot::claw->getEncoderValue(), Robot::claw->getSetpoint());
}

bool StopClaw::isFinished() {
  return false;
}

void StopClaw::end() {
  // Code that runs when isFinished() returns true.
}

void StopClaw::interrupted() {
  // Code that runs when this command is interrupted by another one
  // with a higher priority.
}
