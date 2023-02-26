//
//  Human.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Human.hpp"

using namespace std;

Human::Human() : Creature() , damage(Creature::getDamage())
{}

Human::Human( int newDamage , int newStrength , int newHit ) : damage(newDamage) , Creature(newStrength,newHit)
{}

void Human::setDamage( int newDamage ) {damage = newDamage;}

string Human::getSpecies() { return "Human"; }

int Human::getDamage()
{
    cout << "Human attacks for " << damage << " points!" << endl;
    return damage;
}
