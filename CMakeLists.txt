cmake_minimum_required(VERSION 3.15)
project(projet-de-fin-de-semestre)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(projet-de-fin-de-semestre main.cpp CSVReader.cpp CSVReader.hpp Fonctions.cpp Fonctions.h)
target_link_libraries(projet-de-fin-de-semestre ${CONAN_LIBS})