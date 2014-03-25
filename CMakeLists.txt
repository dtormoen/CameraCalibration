project(CameraCalibration)
cmake_minimum_required(VERSION 2.6)

ADD_DEFINITIONS(
    -std=c++11 
)

set(ENV{OpenCV_DIR} "/opt/local/lib/cmake/")

find_package(OpenCV REQUIRED)

add_executable(
    CameraCalibration
    src/CameraCalibration.cpp
)