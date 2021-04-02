//
//  MagicMapBuilder.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef MagicMapBuilder_hpp
#define MagicMapBuilder_hpp

#include "MapBuilder.hpp"

class MagicMapBuilder : public MapBuilder {
public:
    void BuildCivilianHome();
    void BuildHospital();
    void BuildMIPT();
    void BuildLibrary();
    void BuildHeadquarters();
    void BuildHogwarts();
    void BuildPotionLab();
};

#endif /* MagicMapBuilder_hpp */
