#include <gtest/gtest.h>
#include "CreateWorld.hpp"
#include "UsualMapBuilder.hpp"
#include "UsualTownFactory.hpp"
#include "ArmyFactory.hpp"

TEST(CreateUsualTown, BaseHogwarts) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->map->v_hog_.size(), 0);
}

TEST(CreateUsualTown, BaseMIPT) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->map->v_mipt_.size(), 2);
}

TEST(CreateUsualTown, BaseCivHome) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->map->v_ch_.size(), 10);
}

TEST(CreateUsualTown, BaseHospital) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->map->v_h_.size(), 5);
}

TEST(CreateUsualTown, BaseLibs) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->map->v_lib_.size(), 4);
}

TEST(CreateUsualTown, BaseLabs) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->map->v_lab_.size(), 0);
}

TEST(CreateUsualTown, BaseCatapult) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;

    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->army->GetCatap()->size(), 50);
}

TEST(CreateUsualTown, BaseCrossbower) {
    World world;
    UsualMapBuilder umb;
    UsualTownFactory utf;
    ArmyFactory af;
    
    world.my_town = world.CreateTown(utf, umb, af);
    ASSERT_EQ(world.my_town->army->GetCross()->size(), 150);
}
