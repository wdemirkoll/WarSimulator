#include "Player.h"
#include <iostream>

// Add method
void Player::addMoney(int amount) { if (amount > 0) money_ += amount; }

// Spend method
void Player::spendMoney(int amount) {
    if (amount > 0 && money_ >= amount) { money_ -= amount; }
}

// Show method
void Player::showMoney() const { std::cout << "Money: " << money_ << "$\n"; }

// Constructor (initial value ​​of money)
Player::Player() { money_ = 100; }