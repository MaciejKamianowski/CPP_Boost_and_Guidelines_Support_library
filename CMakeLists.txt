cmake_minimum_required(VERSION 3.22)
project(boost_and_gsl VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Microsoft.GSL CONFIG)
find_package(Boost 1.78 REQUIRED COMPONENTS
             date_time filesystem iostreams chrono)
add_executable(example example.cpp)
add_executable(boost_chrono_duration_example boost_chrono_duration_example.cpp)
add_executable(boost_chrono_now boost_chrono_now.cpp)
add_executable(current_time_example current_time_example.cpp)
add_library(current_time current_time.cpp)
add_executable(boost_filesystem_example boost_filesystem_example.cpp)

target_link_libraries(current_time_example current_time)
target_link_libraries(current_time Boost::chrono)
target_link_libraries(example Boost::date_time Boost::filesystem
                          Boost::iostreams)
target_link_libraries(example Microsoft.GSL::GSL)
target_link_libraries(boost_chrono_duration_example Boost::chrono)
target_link_libraries(boost_chrono_now Boost::chrono)
target_link_libraries(boost_filesystem_example Boost::filesystem)