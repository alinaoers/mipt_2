//
//  TownFactory.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef TownFactory_hpp
#define TownFactory_hpp

#include "MapBuilder.hpp"
#include "ArmyFactory.hpp"
#include "Map.hpp"
#include "Army.hpp"

class TownFactory {
public:
    virtual Map* constructMap(MapBuilder& builder) = 0;
    Army* createArmy(ArmyFactory& factory);
};

#endif /* TownFactory_hpp */
