cmake_minimum_required(VERSION 2.8)
project(Resistance)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

set(HEADERS include/Army.hpp
            include/ArmyFactory.hpp
            include/Buildings.hpp
            include/CreateWorld.hpp
            include/MagicMapBuilder.hpp
            include/MagicTownFactory.hpp
            include/Map.hpp
            include/MapBuilder.hpp
            include/Town.hpp
            include/TownFactory.hpp
            include/UsualMapBuilder.hpp
            include/UsualTownFactory.hpp
            include/Warriors.hpp
)

set(SOURCES src/Army.cpp
            src/ArmyFactory.cpp
            src/Buildings.cpp
            src/CreateWorld.cpp
            src/MagicMapBuilder.cpp
            src/MagicTownFactory.cpp
            src/MapBuilder.cpp
            src/Town.cpp
            src/TownFactory.cpp
            src/UsualMapBuilder.cpp
            src/UsualTownFactory.cpp
            src/Warriors.cpp
)

set(TEST_FILES tests/main_test.cpp
               tests/MagicTownTest.cpp
               tests/UsualTownTest.cpp
)

find_package(GTest REQUIRED)
include_directories(include)
include_directories(${GTEST_INCLUDE_DIRS})

add_library(modules STATIC ${SOURCES})

add_executable(FantasyWorld main.cpp)
add_executable(Tests ${TEST_FILES})

target_link_libraries(Tests ${GTEST_LIBRARIES} pthread)
target_link_libraries(Tests modules)
target_link_libraries(FantasyWorld modules)
enable_testing()
