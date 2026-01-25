cmake_minimum_required(VERSION 3.16)

project(olio-ohjelmoint-viikkotehtava3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio-ohjelmoint-viikkotehtava3
    build/chef.h build/chef.cpp
    build/italianchef.h build/italianchef.cpp
    build/main.cpp)

include(GNUInstallDirs)
install(TARGETS olio-ohjelmoint-viikkotehtava3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
