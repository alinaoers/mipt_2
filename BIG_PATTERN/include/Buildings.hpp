//
//  Buildings.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef Buildings_hpp
#define Buildings_hpp

//class Building {
//public:
//    void UpStrength();
//};
void UpStrength(int& strength);

class CivilianHome {
public:
    int strength_ = 1;
};

class Hospital {
public:
    int strength_ = 2;
};

class MIPT {
public:
    int strength_ = 3;
};

class Hogwarts {
public:
    int strength_ = 2;
};

class Library {
public:
    int strength_ = 2;
};

class PotionLab {
public:
    int strength_ = 3;
};

class Headquarters {
public:
    int strength_ = 4;
};

#endif /* Buildings_hpp */
