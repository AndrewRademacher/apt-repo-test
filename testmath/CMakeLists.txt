cmake_minimum_required(VERSION  3.5.1)
project(testmath)

set(CMAKE_CXX_STANDARD 14)

add_library(testmath SHARED src/testmath.cpp include/testmath.h)
target_include_directories(testmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

install(TARGETS testmath
    LIBRARY DESTINATION lib
    COMPONENT testmath)
