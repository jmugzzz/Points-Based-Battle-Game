//
//  Creature.hpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#ifndef Creature_hpp
#define Creature_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Creature
{
private:
    int strength;
    int hitpoints;
public:
    Creature();
    Creature(int newStrength , int newHit);
    
    void setStrength(int newStrength);
    void setHitPoints(int newHitPoints);
    
    int getStrength();
    int getHitPoints();
    
    virtual string getSpecies() = 0;
    virtual int getDamage();
};


#endif /* Creature_hpp */
