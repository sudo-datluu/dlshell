cmake_minimum_required(VERSION 3.13)

project(shell-starter-cpp)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.hpp)

set(CMAKE_CXX_STANDARD 23) # Enable the C++23 standard

add_executable(shell ${SOURCE_FILES})

find_package(Boost REQUIRED)
if(Boost_FOUND)
    # Include Boost headers
    include_directories(${Boost_INCLUDE_DIRS})
    # Link Boost libraries to the executable
    target_link_libraries(shell ${Boost_LIBRARIES})
endif()