//
//  Cyberdemon.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Demon.hpp"
#include "Cyberdemon.hpp"

using namespace std;

Cyberdemon::Cyberdemon() : Demon() , damage(Creature::getDamage())
{}

Cyberdemon::Cyberdemon( int newCyberDamage, int newDamage , int newStrength , int newHit ) : Demon(newDamage,newStrength,newHit) , damage(newCyberDamage)
{}
void Cyberdemon::setDamage( int newCyberDamage ) { damage = newCyberDamage; }

string Cyberdemon::getSpecies() { return "Cyberdemon";}

int Cyberdemon::getDamage()
{
    damage += Demon::getDamage();
    
    cout << "CyberDemon attacks for " << damage << " points!" << endl;
    
    return damage;
}
