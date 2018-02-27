cmake_minimum_required(VERSION  3.5.1)

add_subdirectory(testmath)
add_subdirectory(testprogram)

set(CPACK_DEB_COMPONENT_INSTALL ON)
set(CPACK_COMPONENTS_GROUPING "IGNORE")

set(CPACK_GENERATOR "DEB")
set(CPACK_PACKAGE_NAME "test")
set(CPACK_PACKAGE_VERSION "1.0")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Andrew Rademacher <andrewrademacher@icloud.com>")
set(CPACK_COMPONENTS_ALL testmath testprogram)

set(CPACK_DEBIAN_TESTPROGRAM_PACKAGE_DEPENDS testmath)
set(CPACK_DEBIAN_TESTPROGRAM_PACKAGE_SHLIBDEPS ON)

set(CPACK_DEBIAN_TESTMATH_PACKAGE_SHLIBDEPS ON)

include(CPack)
