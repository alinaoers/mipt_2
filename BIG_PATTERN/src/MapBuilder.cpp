//
//  MapBuilder.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "MapBuilder.hpp"

MapBuilder::MapBuilder() {
}

MapBuilder::~MapBuilder() {
    delete p;
}

Map* MapBuilder::GetMap() {
    return p;
}

void MapBuilder::createMap() {
    p = new Map;
}
