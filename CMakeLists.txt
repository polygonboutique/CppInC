cmake_minimum_required(VERSION 3.16)
project(custom-project C CXX)
set(CMAKE_CXX_STANDARD 17)

# ---------------------------------------
# C++ Library
# ---------------------------------------
set (CPP_LIB_DIR "${PROJECT_SOURCE_DIR}/source/cpp")
add_library(
    cpplib
    ${CPP_LIB_DIR}/lib.cpp
    ${CPP_LIB_DIR}/lib.h
)
# ---------------------------------------
# C Application
# ---------------------------------------
set (C_APP_DIR "${PROJECT_SOURCE_DIR}/source/c")

add_executable(
  capp
  ${C_APP_DIR}/app.c
  ${C_APP_DIR}/app.h
)

target_include_directories(
  capp
  PRIVATE ${CPP_LIB_DIR}
  PRIVATE ${C_APP_DIR}
)

target_link_libraries(
    capp
    PRIVATE cpplib
)