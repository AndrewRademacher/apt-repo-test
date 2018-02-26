cmake_minimum_required(VERSION  3.5.1)

add_subdirectory(testprogram)
add_subdirectory(testmath)

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "test")
set(CPACK_DEBIAN_PACKAGE_VERSION "1.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Andrew Rademacher <andrewrademacher@icloud.com")

include(CPack)
