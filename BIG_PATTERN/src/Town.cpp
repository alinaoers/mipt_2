//
//  Town.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "Town.hpp"

void Town::GetInfo() {
    if (army->v_catap_.size() != 0) {
        std::cout << army->v_catap_.size() << " - catapult\n";
    }
    
    if (army->v_cross_.size() != 0) {
        std::cout << army->v_cross_.size() << " - crossbower\n\n";
    }
    
    
    if (map->v_ch_.size() != 0) {
        std::cout << map->v_ch_.size() << " - civiliam home\n";
    }
    
    if (map->v_h_.size() != 0) {
        std::cout << map->v_h_.size() << " - hospital\n";
    }
    if (map->v_hq_.size() != 0) {
        std::cout << map->v_hq_.size() << " - headquater\n";
    }
    if (map->v_mipt_.size() != 0) {
        std::cout << map->v_mipt_.size() << " - MIPT\n";
    }
    if (map->v_hog_.size() != 0) {
        std::cout << map->v_hog_.size() << " - Hogwarts\n";
    }
    if (map->v_lib_.size() != 0) {
        std::cout << map->v_lib_.size() << " - library\n";
    }
    if (map->v_lab_.size() != 0) {
        std::cout << map->v_lab_.size() << " - potion laboratory\n";
    }
    
}


Town::~Town() = default;
