//
//  UsualMapBuilder.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "UsualMapBuilder.hpp"
#include <iostream>

void UsualMapBuilder::BuildCivilianHome() {
 //   std::cout << quant_ch << " - quant\n";
    for (int i = 0; i < quant_ch; ++i) {
        p->v_ch_.push_back(CivilianHome());
    }
  //  std::cout << p->v_ch_.size() << " - size\n";
}

void UsualMapBuilder::BuildHospital() {
    for (int i = 0; i < quant_h; ++i) {
        p->v_h_.push_back(Hospital());
    }
}

void UsualMapBuilder::BuildMIPT() {
    for (int i = 0; i < quant_mipt; ++i) {
        p->v_mipt_.push_back(MIPT());
    }
}

void UsualMapBuilder::BuildHeadquarters() {
    for (int i = 0; i < quant_hq; ++i) {
        p->v_hq_.push_back(Headquarters());
    }
}

void UsualMapBuilder::BuildLibrary() {
    for (int i = 0; i < quant_lib; ++i) {
        p->v_lib_.push_back(Library());
        
    }
}

void UsualMapBuilder::BuildHogwarts() {}
void UsualMapBuilder::BuildPotionLab() {}

