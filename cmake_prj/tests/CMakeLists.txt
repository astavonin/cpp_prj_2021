enable_testing()

set(TEST_NAME calc_tests)

find_package(Catch2 REQUIRED)

add_executable(${TEST_NAME} tests.cpp)
target_link_libraries(${TEST_NAME} Catch2::Catch2 calc)

add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
