cmake_minimum_required(VERSION 3.5)
project(engine VERSION 1.0)

# include(FetchContent)
# FetchContent_Declare(SFML
#     GIT_REPOSITORY https://github.com/SFML/SFML.git
#     GIT_TAG 2.6.x)

# FetchContent_Declare(EnTT
#     GIT_REPOSITORY https://github.com/skypjack/entt
#     GIT_TAG v3.13.2)

# FetchContent_MakeAvailable(SFML EnTT)

set(ENGINE_SOURCE_DIR src)
set(ENGINE_INCLUDE_DIR include)

file(GLOB_RECURSE _engine_sources ${ENGINE_SOURCE_DIR}/*.cpp)
file(GLOB_RECURSE _engine_includes ${ENGINE_INCLUDE_DIR}/*.hpp)

# target_include_directories(engine PUBLIC ${_engine_includes}) #>! Not Werk
add_library(engine SHARED ${_engine_sources})