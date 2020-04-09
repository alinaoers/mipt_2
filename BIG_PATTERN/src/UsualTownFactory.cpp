//
//  UsualTownFactory.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//


#include "UsualTownFactory.hpp"
#include <iostream>

Map* UsualTownFactory::constructMap(MapBuilder& builder) {
    builder.createMap();
    builder.BuildCivilianHome();
    builder.BuildHospital();
    builder.BuildHeadquarters();
    builder.BuildMIPT();
    builder.BuildLibrary();
    return builder.GetMap();
}
