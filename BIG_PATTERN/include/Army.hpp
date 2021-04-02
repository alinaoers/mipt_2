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
    std::vector<CatapultMan*> v_catap_;
    std::vector<Crossbower*> v_cross_;
public:
    int GetSizeCross() const;
    int GetSizeCatap() const;
    
    std::vector<CatapultMan*>* GetCatap();
    std::vector<Crossbower*>* GetCross();
    ~Army();
};

#endif /* Army_hpp */
