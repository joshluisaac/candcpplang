cmake_minimum_required(VERSION 3.16)
project(dive_into_cpp)
include_directories(shared)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory("${PROJECT_SOURCE_DIR}/swap" "${PROJECT_SOURCE_DIR}/swap/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/dereferencing" "${PROJECT_SOURCE_DIR}/dereferencing/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/dynamic_memory" "${PROJECT_SOURCE_DIR}/dynamic_memory/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/operator_overloading" "${PROJECT_SOURCE_DIR}/operator_overloading/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/transaction_processing" "${PROJECT_SOURCE_DIR}/transaction_processing/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/const_example" "${PROJECT_SOURCE_DIR}/const_example/output")
add_subdirectory("${PROJECT_SOURCE_DIR}/sockets" "${PROJECT_SOURCE_DIR}/sockets/output")



