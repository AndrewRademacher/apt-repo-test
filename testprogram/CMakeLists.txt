cmake_minimum_required(VERSION  3.5.1)
project(testprogram)

set(CMAKE_CXX_STANDARD 14)

add_executable(testprogram src/main.cpp)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "testprogram")
set(CPACK_PACKAGE_VERSION "1.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Andrew Rademacher <andrewrademacher@icloud.com>")

install(TARGETS testprogram
    RUNTIME DESTINATION /usr/bin)
include(CPack)
