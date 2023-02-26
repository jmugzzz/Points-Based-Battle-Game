//
//  Creature.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include "Creature.hpp"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

Creature::Creature() : strength(10) , hitpoints(10)
{}

Creature::Creature(int newStrength , int newHit) : strength(newStrength) , hitpoints(newHit)
{}

void Creature::setStrength(int newStrength) {strength = newStrength;}
void Creature::setHitPoints(int newHitPoints) {hitpoints = newHitPoints;}

int Creature::getStrength() {return strength;}
int Creature::getHitPoints() {return hitpoints;}


int Creature::getDamage()
{
    srand(unsigned(time(0)));
    int damage = (rand () % strength) + 1;
    
    return damage;
}
