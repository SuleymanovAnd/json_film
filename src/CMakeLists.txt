cmake_minimum_required(VERSION 3.22)
set (MY_DIRECTORY ${CMAKE_SOURCE_DIR}/include)

set(SOURCE
        main.cpp
        )
set(INCLUDE
        ${MY_DIRECTORY}/
        )


add_executable(json_films ${SOURCE} ${INCLUDE})

target_include_directories (json_films PUBLIC ${MY_DIRECTORY})