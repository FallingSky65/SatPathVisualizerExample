cmake_minimum_required(VERSION 3.5)
project(SatPathVisualizerExample)

add_subdirectory(SatPathVisualizer)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC SatPathVisualizer)
