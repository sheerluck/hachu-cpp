cmake_minimum_required(VERSION 3.26)
project(hachu)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS_RELEASE "-march=native -mtune=native -O3 -mmmx -msse -msse2 -msse3 -pedantic -Wextra -Wshadow -Weffc++ -Wsign-compare -Wwrite-strings -Wpointer-arith -Winit-self -Wconversion -Wno-sign-conversion -Wsuggest-override -Wnon-virtual-dtor -Wdelete-non-virtual-dtor -fgraphite-identity -floop-nest-optimize -fdevirtualize-at-ltrans -fipa-pta -fno-semantic-interposition -flto=9 -fuse-linker-plugin -pipe -falign-functions=32")

set(CMAKE_VERBOSE_MAKEFILE ON)

find_package(fmt REQUIRED)

add_definitions(-DKS_STR_ENCODING_NONE)

include_directories(.)

add_executable(hachu hachu.cpp hachu.h 
        board.cpp    board.h
        eval.cpp     eval.h
        move.cpp     move.h
        piece.cpp    piece.h
        variant.cpp  variant.h
        types.h)

target_link_libraries(hachu fmt::fmt)
