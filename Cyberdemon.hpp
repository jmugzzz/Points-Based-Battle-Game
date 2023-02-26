//
//  Cyberdemon.hpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#ifndef Cyberdemon_hpp
#define Cyberdemon_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Demon.hpp"

using namespace std;

class Cyberdemon : public Demon
{
private:
    int damage;
public:
    Cyberdemon();
    Cyberdemon( int newCyberDamage, int newDamage , int newStrength , int newHit );
    
    void setDamage( int newCyberDamage );
    int getDamage();
    string getSpecies();
};

#endif /* Cyberdemon_hpp */
