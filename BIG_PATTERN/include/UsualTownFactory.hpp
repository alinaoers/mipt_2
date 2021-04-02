//
//  UsualTownFactory.hpp
//  GAME
//
//  Created by Алина Орешина on 08/04/2020.
//  Copyright © 2020 Алина Орешина. All rights reserved.
//

#ifndef UsualTownFactory_hpp
#define UsualTownFactory_hpp

#include "TownFactory.hpp"

class UsualTownFactory : public TownFactory {
public:
    Map* constructMap(MapBuilder& builder);
};

#endif /* UsualTownFactory_hpp */
