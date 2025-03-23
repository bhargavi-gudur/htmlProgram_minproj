cmake_minimum_required(VERSION 3.10)
project(sample_google_test)

set(CMAKE_CXX_STANDARD 14)

# Set GoogleTest path (if needed)
set(GTEST_ROOT "C:/Users/gandl/gtest_install")

# Find Google Test
find_package(GTest REQUIRED)

add_executable(sample_google_test sample_google.cpp)

# Link Google Test
target_link_libraries(sample_google_test PRIVATE GTest::gtest GTest::gtest_main)

# Enable testing
enable_testing()
add_test(NAME SampleTest COMMAND sample_google_test)
