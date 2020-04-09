//
//  TownFactory.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "TownFactory.hpp"

Army* TownFactory::createArmy(ArmyFactory& factory) {
    Army* p = new Army;
    for (size_t i = 0; i < p->size_cross_; ++i) {
        p->v_cross_.push_back(factory.createCrossbower());
    }
    for (size_t i = 0; i < p->size_catap_; ++i) {
        p->v_catap_.push_back(factory.createCatapultMan());
    }
    return p;
}
