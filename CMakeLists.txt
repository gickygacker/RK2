cmake_minimum_required(VERSION 3.10)
project(Proxy)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
find_package(GTest REQUIRED)

add_executable(test_proxy test_proxy.cpp subject.h)
target_link_libraries(test_proxy GTest::GTest GTest::Main)

add_executable(proxy main.cpp)
