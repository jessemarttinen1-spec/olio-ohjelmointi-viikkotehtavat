cmake_minimum_required(VERSION 3.16)

project(olio-ohjelmointi-viikkotehtava5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(olio-ohjelmointi-viikkotehtava5 main.cpp
    build/notifikaattori.h build/notifikaattori.cpp
    build/seuraaja.h build/seuraaja.cpp)

include(GNUInstallDirs)
install(TARGETS olio-ohjelmointi-viikkotehtava5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
