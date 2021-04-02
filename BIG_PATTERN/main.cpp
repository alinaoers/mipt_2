//
//  main.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include <iostream>
#include "CreateWorld.hpp"
#include "UsualMapBuilder.hpp"
#include "MagicMapBuilder.hpp"
#include "UsualTownFactory.hpp"
#include "MagicTownFactory.hpp"
#include "ArmyFactory.hpp"

int main() {
    
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    std::cout << "Hello! Choose your town, enter the appropriate number\n1. Magic Town\n2. Usual Town\n";
    int number;
    std::cin >> number;
    while (number != 1 && number != 2) {
        std::cout << "No such number in the menu, try again:\n";
        std::cin >> number;
    }
    world.id = number;
    if (number == 1) {
        world.my_town = world.CreateTown(mtf, mmb, af);
        world.em_town = world.CreateTown(utf, umb, af);
    } else if (number == 2) {
        world.my_town = world.CreateTown(utf, umb, af);
        world.em_town = world.CreateTown(mtf, mmb, af);
    }
    
    world.GetMyInfo();
    world.GetOtherInfo();
    
    return 0;
}
