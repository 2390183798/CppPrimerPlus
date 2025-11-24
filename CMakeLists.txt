cmake_minimum_required(VERSION 3.28)
#project(HelloCpp01)
project(learnCpp)

set(CMAKE_CXX_STANDARD 17)

#file(GLOB SOURCES "ch09/do01/*.cpp")
#file(GLOB SOURCES "ch09/do01s2/*.cpp")
#file(GLOB SOURCES "ch09/do02/*.cpp")

add_executable(
    CppPrimerPlus ${SOURCES}
        ch09/do01s2/do9.4auto.cpp


)
