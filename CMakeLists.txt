cmake_minimum_required(VERSION 3.0.0)
project(NY VERSION 0.1.0)

include(CTest)
enable_testing()

#add_library(NY NY.cpp)

add_subdirectory(util)
add_subdirectory(app)
add_subdirectory(server)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
