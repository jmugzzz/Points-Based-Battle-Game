//
//  Balrog.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Demon.hpp"
#include "Balrog.hpp"

using namespace std;

Balrog::Balrog() : Demon() , damage(Creature::getDamage())
{}
Balrog::Balrog( int new_Balrog_Damage, int newDamage , int newStrength , int newHit ) : damage(new_Balrog_Damage) , Demon(newDamage,newStrength,newHit)
{}

void Balrog::setDamage( int new_Balrog_Damage ) { damage = new_Balrog_Damage; }

int Balrog::getDamage()
{
    damage += Demon::Creature::getDamage();
    
    cout << "Balrog attacks for " << damage << " points!" << endl;
    
    int damage2 = (rand() % Creature::getStrength()) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage = damage + damage2;
    
    return damage;
}

string Balrog::getSpecies() { return "Balrog";}
