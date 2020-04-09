//
//  Army.cpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#include "Army.hpp"

Army::~Army() {
    for (size_t i = 0; i < size_cross_; ++i) {
        delete[] v_cross_[i];
    }
    for (size_t i = 0; i < size_catap_; ++i) {
        delete[] v_catap_[i];
    }
}
