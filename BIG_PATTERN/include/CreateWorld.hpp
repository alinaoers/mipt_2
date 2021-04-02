//
//  CreateWorld.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef CreateWorld_hpp
#define CreateWorld_hpp

#include "TownFactory.hpp"
#include "MapBuilder.hpp"
#include "ArmyFactory.hpp"
#include "Town.hpp"

class World {
public:
    int id;
    Town* my_town;
    Town* em_town;
    void GetMyInfo();
    void GetOtherInfo();
    Town* CreateTown(TownFactory& Tfactory, MapBuilder& Mbuilder, ArmyFactory& Afactory);
};

#endif /* CreateWorld_hpp */
