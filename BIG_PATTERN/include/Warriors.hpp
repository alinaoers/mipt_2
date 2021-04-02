//
//  Warriors.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef Warriors_hpp
#define Warriors_hpp

class CatapultMan {
public:
    int aim_ = 1;
    int price_ = 50;
    int level_ = 0;
    void UpLevel();
    void SetAim();
    ~CatapultMan();
};

class Crossbower {
public:
    int aim_ = 1;
    int price_ = 30;
    int level_ = 0;
    void UpLevel();
    void SetAim();
    ~Crossbower();
};

#endif /* Warriors_hpp */
