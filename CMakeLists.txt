cmake_minimum_required(VERSION 3.20)
project(PybindExample)
# this is needed for libc compatibility accross linux versions
set(CMAKE_CXX_FLAGS "-static -static-libstdc++ -static-libgcc -fpermissive" )

find_package(Python3 ${PYTHON_VERSION} EXACT REQUIRED COMPONENTS Interpreter Development.Module)
add_subdirectory(pybind11)
pybind11_add_module(_pybindexample MODULE pybind_example.cpp)
set_property(TARGET _pybindexample PROPERTY CXX_STANDARD 17)