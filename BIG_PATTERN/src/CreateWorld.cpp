//
//  CreateWorld.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "CreateWorld.hpp"
#include <iostream>

Town* World::CreateTown(TownFactory &Tfactory,MapBuilder &Mbuilder, ArmyFactory &Afactory) {
    Town* p = new Town;
    p->map = Tfactory.constructMap(Mbuilder);
    p->army = Tfactory.createArmy(Afactory);
    return p;
}

void World::GetMyInfo() {
    if (id == 1) {
        std::cout << "In your magic town:\n\n";
    } else {
        std::cout << "In your human town:\n\n";
    }
    my_town->GetInfo();
    std::cout << '\n';
}

void World::GetOtherInfo() {
    if (id == 1) {
        std::cout << "In human town:\n\n";
    } else {
        std::cout << "In magic town:\n\n";
    }
    em_town->GetInfo();
    std::cout << '\n';
}

