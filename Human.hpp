//
//  Human.hpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#ifndef Human_hpp
#define Human_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.hpp"

using namespace std;

class Human : public Creature
{
private:
    int damage;
public:
    Human();
    Human( int newDamage , int newStrength , int newHit );
    
    void setDamage( int newDamage );
    int getDamage();
    string getSpecies();
};

#endif /* Human_hpp */
