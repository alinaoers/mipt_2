#include <gtest/gtest.h>
#include "CreateWorld.hpp"
#include "MagicMapBuilder.hpp"
#include "MagicTownFactory.hpp"
#include "ArmyFactory.hpp"

TEST(CreateMagicTown, BaseHogwarts) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->map->v_hog_.size(), 2);
}

TEST(CreateMagicTown, BaseMIPT) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->map->v_mipt_.size(), 0);
}

TEST(CreateMagicTown, BaseCivHome) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->map->v_ch_.size(), 10);
}

TEST(CreateMagicTown, BaseHospital) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->map->v_h_.size(), 5);
}

TEST(CreateMagicTown, BaseLibs) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->map->v_lib_.size(), 0);
}

TEST(CreateMagicTown, BaseLabs) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->map->v_lab_.size(), 4);
}

TEST(CreateMagicTown, BaseCatapult) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->army->v_catap_.size(), 50);
}

TEST(CreateMagicTown, BaseCrossbower) {
    World world;
    MagicMapBuilder mmb;
    MagicTownFactory mtf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(mtf, mmb, af);
    ASSERT_EQ(world.my_town->army->v_cross_.size(), 150);
}


