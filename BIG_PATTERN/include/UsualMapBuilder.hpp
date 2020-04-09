//
//  UsualMapBuilder.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef UsualMapBuilder_hpp
#define UsualMapBuilder_hpp

#include "MapBuilder.hpp"

class UsualMapBuilder : public MapBuilder {
public:
    void BuildCivilianHome();
    void BuildHospital();
    void BuildMIPT();
    void BuildHeadquarters();
    void BuildLibrary();
    void BuildHogwarts();
    void BuildPotionLab();
};

#endif /* UsualMapBuilder_hpp */
