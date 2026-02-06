#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/adi.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
inline pros::Motor mainIntake(-5);
inline pros::Motor indexer(8);
inline pros::adi::Pneumatics tongue('A', false);  // Pneumatics for the intake tongue, A is the out port, B is the in port