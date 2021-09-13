cmake_minimum_required(VERSION 3.16)
project(training_cpp)

set(CMAKE_CXX_STANDARD 17)
include_directories(include)

add_executable(training_cpp main.cpp src/app.cpp src/helloworld.cpp src/inputandoutput.cpp src/environment.cpp src/basicdatatypes.cpp src/conditionalstatements.cpp src/forloop.cpp src/variablesizedarrays.cpp src/stringstream.cpp src/boxit.cpp)
target_link_libraries(${PROJECT_NAME} m)