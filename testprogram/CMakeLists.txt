cmake_minimum_required(VERSION  3.5.1)
project(testprogram)

set(CMAKE_CXX_STANDARD 14)

add_executable(testprogram src/main.cpp)
target_link_libraries(testprogram testmath)

install(TARGETS testprogram
    RUNTIME DESTINATION bin
    COMPONENT testprogram)
