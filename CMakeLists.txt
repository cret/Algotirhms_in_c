cmake_minimum_required(VERSION 3.2)
project(Algotirhms_in_c)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

set(SOURCE_FILES 03/exercise/3.44/main.c)
aux_source_directory(03/exercise/3.44/ SRC_LIST)
add_executable(Algotirhms_in_c ${SRC_LIST})