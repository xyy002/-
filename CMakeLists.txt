cmake_minimum_required(VERSION 3.24)
project(led C)

set(CMAKE_C_STANDARD 99)

add_executable(led main.c led.h led.c led.c key.c key.h key.h key.c delay.c sys.c sys.h sys.h)
