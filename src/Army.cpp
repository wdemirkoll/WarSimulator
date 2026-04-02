#include "Army.h"
#include <iostream>

void Army::calculateForces() {
    // Calculation of unit forces
    groundForce_ = (soldier_ * 0.0001f) + (tank_ * 0.01f);
    navalForce_ = (ship_ * 0.03f);
    airForce_ = (plane_ * 0.02f) + (missile_ * 0.04f);
    totalForce_ = (groundForce_) + (navalForce_) + (airForce_);
}

void Army::showUnits() const {
    // Show units on screen
    std::cout << "=======================================\n";
    std::cout << "Soldiers: " << soldier_ << "\n";
    std::cout << "Tanks: " << tank_ << "\n";
    std::cout << "Planes: " << plane_ << "\n";
    std::cout << "Ships: " << ship_ << "\n";
    std::cout << "Missiles: " << missile_ << "\n";
    std::cout << "=======================================\n";
}

void Army::showForces() const {
    // Show units forces on screen
    std::cout << "=======================================\n";
    std::cout << "Total Force: " << totalForce_ << "x\n";
    std::cout << "Ground Force: " << groundForce_ << "x\n";
    std::cout << "Naval Force: " << navalForce_ << "x\n";
    std::cout << "Air Force: " << airForce_ << "x\n";
    std::cout << "=======================================\n";
}

// ===========
// Add methods
// ===========
void Army::addSoldier(int number) { if (number > 0) soldier_ += number; }

void Army::addTank(int number) { if (number > 0) tank_ += number; }

void Army::addPlane(int number) { if (number > 0) plane_ += number; }

void Army::addShip(int number) { if (number > 0) ship_ += number; }

void Army::addMissile(int number) { if (number > 0) missile_ += number; }

// ==============
// Remove methods
// ==============
void Army::removeSoldier(int number) {
    if (number > 0 && soldier_ >= number) { soldier_ -= number; }
}

void Army::removeTank(int number) {
    if (number > 0 && tank_ >= number) { tank_ -= number; }
}

void Army::removePlane(int number) {
    if (number > 0 && plane_ >= number) { plane_ -= number; }
}

void Army::removeShip(int number) {
    if (number > 0 && ship_ >= number) { ship_ -= number; }
}

void Army::removeMissile(int number) {
    if (number > 0 && missile_ >= number) { missile_ -= number; }
}

Army::Army() {
    // Constructor (initial values ​​of units)
    soldier_ = 50;
    tank_ = 5;
    plane_ = 1;
    ship_ = 0;
    missile_ = 0;
    
    // Calculate initial powers
    calculateForces(); 
}