//
//  ArmyFactory.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef ArmyFactory_hpp
#define ArmyFactory_hpp

#include "Warriors.hpp"

class ArmyFactory {
    int size_catap_ = 50;
    int size_cross_ = 150;
public:
    int StartSizeCatap() const;
    int StartSizeCross() const;
    CatapultMan* createCatapultMan();
    Crossbower* createCrossbower();
    ~ArmyFactory();
};

#endif /* ArmyFactory_hpp */
