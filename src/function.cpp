#include <sys/types.h>
#include "main.h"
#include "pros/motors.h"
#include "subsystems.hpp"

void runIntakeHigh() {
    mainIntake.move(127);
    indexer.move(127);
}
void runIntakeLow() {
    mainIntake.move(127);
    indexer.move(40);
}
void runIntakeOut() {
    mainIntake.move(-127);
    indexer.move(-90);
}
void stopIntake() {
    mainIntake.move(0);
    indexer.move(0);
}

void tongueOut() {
    Tongue.set_value(true);
}
void tongueIn() {
    Tongue.set_value(false); 
}

void tongueToggle() {
    Tongue.toggle();
}
