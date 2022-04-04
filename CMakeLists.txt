cmake_minimum_required(VERSION 3.21)
project(WordlistGenerator)

set(CMAKE_CXX_STANDARD 17)

add_executable(WordlistGenerator main.cpp
                numberGenerator.cpp numberGenerator.h
                logLib.h logLib.cpp
                phoneGenerator.cpp phoneGenerator.h
        )
