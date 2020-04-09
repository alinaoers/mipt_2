//
//  Army.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef Army_hpp
#define Army_hpp

#include <vector>
#include "Warriors.hpp"

class Army {
public:
    int size_catap_ = 50;
    int size_cross_ = 150;
    std::vector<CatapultMan*> v_catap_;
    std::vector<Crossbower*> v_cross_;
    ~Army();
};

#endif /* Army_hpp */
