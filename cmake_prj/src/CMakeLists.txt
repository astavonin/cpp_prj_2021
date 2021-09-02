set(PROJECT_NAME calc)

add_library(${PROJECT_NAME} calc.cpp)

target_include_directories(
    ${PROJECT_NAME}
    INTERFACE "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    PUBLIC include)
