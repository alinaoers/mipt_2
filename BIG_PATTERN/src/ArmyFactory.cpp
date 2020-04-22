//
//  ArmyFactory.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//
#include "ArmyFactory.hpp"

int ArmyFactory::StartSizeCatap() const {
    return size_catap_;
}
int ArmyFactory::StartSizeCross() const {
    return size_cross_;
}

CatapultMan* ArmyFactory::createCatapultMan() {
    return new CatapultMan();
}

Crossbower* ArmyFactory::createCrossbower() {
    return new Crossbower();
}

ArmyFactory::~ArmyFactory() = default;
