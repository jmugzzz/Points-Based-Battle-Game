//
//  Demon.hpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#ifndef Demon_hpp
#define Demon_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class Demon : public Creature
{
private:
    int damage;
public:
    Demon();
    Demon( int newDamage , int newStrength , int newHit );
    
    void setDamage( int newDamage );
    virtual int getDamage();
    string getSpecies();
};

#endif /* Demon_hpp */
