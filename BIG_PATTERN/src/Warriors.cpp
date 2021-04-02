//
//  Warriors.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "Warriors.hpp"

void CatapultMan::UpLevel() {
    level_ += 1;
    SetAim();
}

void CatapultMan::CatapultMan::SetAim() {
    aim_ = level_ * 3;
}

CatapultMan::~CatapultMan() = default;

void Crossbower::UpLevel() {
    level_ += 1;
    SetAim();
}

void Crossbower::SetAim() {
    aim_ = level_ + 5;
}

Crossbower::~Crossbower() = default;
