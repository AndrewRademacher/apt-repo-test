cmake_minimum_required(VERSION  3.5.1)
project(testmath)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(testmath SHARED src/testmath.cpp)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "testmath")
set(CPACK_PACKAGE_VERSION "1.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Andrew Rademacher <andrewrademacher@icloud.com>")

install(TARGETS testmath
    LIBRARY DESTINATION /usr/lib)

include(CPack)
