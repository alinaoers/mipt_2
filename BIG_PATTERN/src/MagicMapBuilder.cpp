//
//  MagicMapBuilder.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "MagicMapBuilder.hpp"

void MagicMapBuilder::BuildCivilianHome() {
    for (int i = 0; i < quant_ch; ++i) {
        p->v_ch_.push_back(CivilianHome());
    }
}

void MagicMapBuilder::BuildHospital() {
    for (int i = 0; i < quant_h; ++i) {
        p->v_h_.push_back(Hospital());
    }
}

void MagicMapBuilder::BuildHogwarts() {
    for (int i = 0; i < quant_hog; ++i) {
        p->v_hog_.push_back(Hogwarts());
    }
}

void MagicMapBuilder::BuildHeadquarters() {
    for (int i = 0; i < quant_hq; ++i) {
        p->v_hq_.push_back(Headquarters());
    }
}

void MagicMapBuilder::BuildPotionLab() {
    for (int i = 0; i < quant_lab; ++i) {
        p->v_lab_.push_back(PotionLab());
    }
}

void MagicMapBuilder::BuildMIPT() {}
void MagicMapBuilder::BuildLibrary() {}
