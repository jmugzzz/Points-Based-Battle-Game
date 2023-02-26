//
//  GameMain.cpp
//  Assignment 2
//
//  Created by Joy Mugo on 24/11/2022.
//

#include <iostream>
#include <string>
#include <ctime>
#include "Creature.hpp"
#include "Demon.hpp"
#include "Human.hpp"
#include "Elf.hpp"
#include "Cyberdemon.hpp"
#include "Balrog.hpp"

using namespace std;

void battleArena ( Creature& creature1 , Creature& creature2 )
{
    while ( creature1.getHitPoints() > 0 && creature2.getHitPoints() > 0)
    {
        int C1Damage = creature1.getDamage();
        creature2.setHitPoints((creature2.getHitPoints() - C1Damage));
        
        int C2Damage = creature2.getDamage();
        creature1.setHitPoints((creature1.getHitPoints() - C2Damage));
        
    }
    
    if ( creature1.getHitPoints() <= 0 && creature2.getHitPoints() <= 0 )
        cout << "Both creatures have been defeated!! So it is a tie!" << endl;
    
    else if ( creature1.getHitPoints() > 0 && creature2.getHitPoints() <= 0 )
        cout << creature2.getSpecies() << " has been defeated so " << creature1.getSpecies() << " wins!" << endl;
    else
        cout << creature1.getSpecies() << " has been defeated so " << creature2.getSpecies() << " wins!" << endl;
}

int main()
{
    Elf e;
    Cyberdemon cd;
    e.setHitPoints(100);
    cd.setHitPoints(100);
    battleArena(e, cd);
    
    
    return 0;
}
