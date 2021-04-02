//
//  MagicTownFactory.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "MagicTownFactory.hpp"
#include <iostream>

Map* MagicTownFactory::constructMap(MapBuilder& builder) {
    builder.createMap();
    builder.BuildCivilianHome();
    builder.BuildHospital();
    builder.BuildHeadquarters();
    builder.BuildHogwarts();
    builder.BuildPotionLab();
    return builder.GetMap();
}
