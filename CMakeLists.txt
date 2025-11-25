cmake_minimum_required(VERSION 3.28)
#project(HelloCpp01)
project(learnCpp)

set(CMAKE_CXX_STANDARD 17)

#file(GLOB SOURCES "ch09/do01/*.cpp")
#file(GLOB SOURCES "ch09/do01s2/*.cpp")
#file(GLOB SOURCES "ch09/do02/*.cpp")

add_executable(
    CppPrimerPlus ${SOURCES}
#        ch09/do01s2/do9.11namesp.h

#        ch09/do02/do9.5external.cpp
#        ch09/do02/do9.6support.cpp

#        ch09/do03twofile/do9.7twofile01.cpp
#        ch09/do03twofile/do9.8twofile02.cpp

#        ch09/do04static/do9.9static.cpp

        ch09/do05namesp/do9.11namesp.h
        ch09/do05namesp/do9.12namesp.cpp
        ch09/do05namesp/do9.13namessp.cpp




)
