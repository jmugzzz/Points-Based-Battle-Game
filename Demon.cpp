//
//  Demon.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Demon.hpp"

using namespace std;

Demon::Demon() : Creature() , damage(Creature::getDamage())
{}

Demon::Demon( int newDamage , int newStrength , int newHit ) : damage(0) , Creature(newStrength,newHit)
{}

void Demon::setDamage(int newDamage) {damage = newDamage;}

string Demon::getSpecies() { return "Demon"; }

int Demon::getDamage()
{
    damage += Creature::getDamage();

    if ( (rand () % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional points!" << endl;
    }
    
    return damage;
}

