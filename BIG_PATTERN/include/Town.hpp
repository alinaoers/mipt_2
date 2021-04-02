//
//  Town.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef Town_hpp
#define Town_hpp

#include "Map.hpp"
#include "Army.hpp"
#include <iostream>

class Town {
public:
    ~Town();
    void GetInfo();
    Map* map;
    Army* army;
};

#endif /* Town_hpp */
