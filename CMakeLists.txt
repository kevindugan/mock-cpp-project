cmake_minimum_required(VERSION 3.6)

project(Package CXX)

enable_testing()

##############################################
# MPI
##############################################
find_package(MPI REQUIRED)
set(CMAKE_CXX_COMPILER mpicxx)
set(CMAKE_C_COMPILER mpicc)

##############################################
# Project
##############################################
add_subdirectory(Package)