//
//  Elf.hpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#ifndef Elf_hpp
#define Elf_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Creature.hpp"
#include "Elf.hpp"

using namespace std;

class Elf : public Creature
{
private:
    int damage;
public:
    Elf();
    Elf( int newDamage , int newStrength , int newHit );
    
    void setDamage( int newDamage );
    int getDamage();
    string getSpecies();
};

#endif /* Elf_hpp */
