cmake_minimum_required(VERSION 3.21)
project(cpp_word_game)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_word_game
        Dictionary.cpp
        Dictionary.h
        Game.cpp
        Game.h
        main.cpp)
