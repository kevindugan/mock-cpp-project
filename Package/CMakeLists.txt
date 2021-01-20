enable_testing()

add_library(Package Package.cpp)
target_include_directories(Package INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(tests)