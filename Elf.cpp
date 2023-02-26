//
//  Elf.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Elf.hpp"

using namespace std;

Elf::Elf() : Creature() , damage(Creature::getDamage())
{}

Elf::Elf( int newDamage , int newStrength , int newHit ) : damage(0) , Creature(newStrength,newHit)
{}

void Elf::setDamage(int newDamage) {damage = newDamage;}

string Elf::getSpecies() { return "Elf"; }

int Elf::getDamage()
{
    damage += Creature::getDamage();
    
    cout << "Elf attacks for " << damage << " points!" << endl;
    
    if ( (rand () % 10) == 0 )
    {
        cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
        damage = damage * 2;
    }
    
    return damage;
}
