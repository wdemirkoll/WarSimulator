#ifndef ARMY_H
#define ARMY_H

#include <iostream>

class Army { 
private:  
    // Army units
    int soldier_;
    int tank_;
    int plane_;
    int ship_;
    int missile_;

    // Army units forces
    float totalForce_;
    float groundForce_;
    float navalForce_;
    float airForce_;

public:
    // Methods
    int getTotalForce() const;
    void calculateForces();
    void showUnits() const;
    void showForces() const;
    
    // Add methods
    void addSoldier(int number);
    void addTank(int number);
    void addPlane(int number);
    void addShip(int number);
    void addMissile(int number);

    // Remove methods
    void removeSoldier(int number);
    void removeTank(int number);
    void removePlane(int number);
    void removeShip(int number);
    void removeMissile(int number);

    // Constructor
    Army();
};

#endif // ARMY_H