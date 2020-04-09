//
//  Map.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp

#include <vector>
#include "Buildings.hpp"

class Map {
public:
    std::vector<CivilianHome> v_ch_;
    std::vector<Hospital> v_h_;
    std::vector<MIPT> v_mipt_;
    std::vector<Hogwarts> v_hog_;
    std::vector<Headquarters> v_hq_;
    std::vector<Library> v_lib_;
    std::vector<PotionLab> v_lab_;
};

#endif /* Map_hpp */
