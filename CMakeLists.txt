# CMakeLists.txt
cmake_minimum_required(VERSION 3.5)
project(cpp_template)

find_package(spdlog CONFIG REQUIRED)
# Find dependencies provided by vcpkg (via vcpkg.cmake)
# find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(unofficial-sqlite3 CONFIG REQUIRED)
# find_package(fmt CONFIG REQUIRED)
find_package(Poco REQUIRED Foundation)

# main target
add_executable(main)
target_sources(main PRIVATE src/main.cpp)
target_link_libraries(main PRIVATE unofficial::sqlite3::sqlite3 spdlog::spdlog spdlog::spdlog_header_only Poco::Foundation)
set_property(TARGET main PROPERTY CXX_STANDARD 20)

# tests target
add_executable(tests)
target_sources(tests PRIVATE src/test.cpp)
target_link_libraries(tests PRIVATE unofficial::sqlite3::sqlite3 fmt::fmt spdlog::spdlog spdlog::spdlog_header_only Poco::Foundation)
set_property(TARGET tests PROPERTY CXX_STANDARD 20)
enable_testing()
add_test(tests tests)