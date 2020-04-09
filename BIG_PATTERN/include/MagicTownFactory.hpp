//
//  MagicTownFactory.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef MagicTownFactory_hpp
#define MagicTownFactory_hpp

#include "TownFactory.hpp"

class MagicTownFactory : public TownFactory {
public:
    Map* constructMap(MapBuilder& builder);
};

#endif /* MagicTownFactory_hpp */
