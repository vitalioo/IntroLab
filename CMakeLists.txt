cmake_minimum_required(VERSION 3.5.1)

project(IntroLab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(IntroLab main.cpp)

add_subdirectory(module1)
add_subdirectory(module2)
add_subdirectory(module3)

target_include_directories(IntroLab PRIVATE module1 module2 module3)

target_link_libraries(IntroLab PRIVATE library1 library2 library3)