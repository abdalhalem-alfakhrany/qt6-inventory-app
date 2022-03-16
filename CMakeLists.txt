cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# this will be the qt6 version installation path
set(CMAKE_PREFIX_PATH "/home/gnome/DEV/Qt/6.2.3/gcc_64/lib/cmake/") 

project(inverntoryApp)

add_executable(${PROJECT_NAME} 
    Sources/main.cpp
    
    Sources/Inventory.cpp
    Headers/Inventory.h
)

find_package(Qt6 REQUIRED COMPONENTS Core )
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core )