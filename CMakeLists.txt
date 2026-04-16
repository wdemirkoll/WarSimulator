cmake_minimum_required(VERSION 3.10)

project(WarSimulator)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Define the executable target
add_executable(SimpleBankApp
    src/Main.cpp
    src/Army.cpp
    src/Console.cpp
    src/Menus.cpp
    src/Player.cpp
)

# Specify the include directories for the target
target_include_directories(SimpleBankApp PRIVATE include)
