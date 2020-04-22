//
//  Army.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "Army.hpp"

int Army::GetSizeCross() const {
    return v_cross_.size();
}

int Army::GetSizeCatap() const {
    return v_catap_.size();
}

std::vector<CatapultMan*>* Army::GetCatap() {
    return &v_catap_;
}

std::vector<Crossbower*>* Army::GetCross() {
    return &v_cross_;
}

Army::~Army() {
    for (size_t i = 0; i < v_cross_.size(); ++i) {
        delete[] v_cross_[i];
    }
    for (size_t i = 0; i < v_catap_.size(); ++i) {
        delete[] v_catap_[i];
    }
}
