//
//  ArmyFactory.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "ArmyFactory.hpp"

CatapultMan* ArmyFactory::createCatapultMan() {
    return new CatapultMan();
}

Crossbower* ArmyFactory::createCrossbower() {
    return new Crossbower();
}

ArmyFactory::~ArmyFactory() = default;
