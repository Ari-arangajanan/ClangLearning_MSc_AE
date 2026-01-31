cmake_minimum_required(VERSION 4.1)
project(c_lang C)

set(CMAKE_C_STANDARD 11)

add_executable(c_lang
        c.c
        temp/Temprature.c
        functions/Functions.c)
