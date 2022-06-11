cmake_minimum_required(VERSION 3.22)
project(boost_and_gsl VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Microsoft.GSL CONFIG)
find_package(Boost 1.78 REQUIRED COMPONENTS
             date_time filesystem iostreams)
add_executable(example example.cpp)
target_link_libraries(example Boost::date_time Boost::filesystem
                          Boost::iostreams)
target_link_libraries(example Microsoft.GSL::GSL)