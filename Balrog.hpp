//
//  Balrog.hpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#ifndef Balrog_hpp
#define Balrog_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Demon.hpp"

using namespace std;

class Balrog : public Demon
{
private:
    int damage;
public:
    Balrog();
    Balrog( int new_Balrog_Damage, int newDamage , int newStrength , int newHit );
    
    void setDamage( int new_Balrog_Damage );
    int getDamage();
    string getSpecies();
};

#endif /* Balrog_hpp */
