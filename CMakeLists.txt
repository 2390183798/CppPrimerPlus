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

#        ch09/do05namesp/do9.11namesp.h
#        ch09/do05namesp/do9.12namesp.cpp
#        ch09/do05namesp/do9.13namessp.cpp

#        ch10/do01/do10.1stock00.h
#        ch10/do01/do10.2stock00.cpp
#        ch10/do01/do10.3usestock00.cpp


#        ch10/do01/do10.4stock10.h
#        ch10/do01/do10.5stock10.cpp
#        ch10/do01/do10.6usestock10.cpp


        ch10/do01/do10.7stock20.h
        ch10/do01/do10.8stock20.cpp
        ch10/do01/do10.9usestock20.cpp

)
