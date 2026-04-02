#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player {
private:
    // Player's money
    int money_;

public:
    // Player's money methods
    void addMoney(int amount);
    void spendMoney(int amount);
    void showMoney() const;
    int getMoney() const;
    
    // Constructor
    Player();
};

#endif // PLAYER_H