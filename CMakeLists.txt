cmake_minimum_required(VERSION 3.22)
project(json_films)

set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)
add_subdirectory(src)

target_link_libraries(json_films PRIVATE nlohmann_json::nlohmann_json)