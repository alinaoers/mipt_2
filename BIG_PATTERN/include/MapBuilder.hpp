//
//  MapBuilder.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef MapBuilder_hpp
#define MapBuilder_hpp

#include "Map.hpp"

class MapBuilder {
protected:
    Map* p;
public:
    int quant_ch = 10;
    int quant_h = 5;
    int quant_mipt = 2;
    int quant_hog = 2;
    int quant_hq = 1;
    int quant_lib = 4;
    int quant_lab = 4;
    
    MapBuilder();
    virtual ~MapBuilder();
    virtual void createMap();
    virtual void BuildCivilianHome() = 0;
    virtual void BuildHospital() = 0;
    virtual void BuildMIPT() = 0;
    virtual void BuildHogwarts() = 0;
    virtual void BuildHeadquarters() = 0;
    virtual void BuildLibrary() = 0;
    virtual void BuildPotionLab() = 0;
    virtual Map* GetMap();
};

#endif /* MapBuilder_hpp */
