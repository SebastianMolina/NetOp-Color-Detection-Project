cmake_minimum_required(VERSION 3.5)
project(NetOp_Final)

find_package( OpenCV REQUIRED )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp util/VisionFilters.cpp include/VisionFilters.h include/VisionInfo.h)
add_executable(NetOp_Final ${SOURCE_FILES})

target_link_libraries( NetOp_Final ${OpenCV_LIBS} )