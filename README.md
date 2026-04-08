# War Simulator

This is a simple console-based war simulator developed in C++. The project is built using Object-Oriented Programming (OOP) principles and is designed to demonstrate class-based architecture and basic game logic.

In this simulation, the player manages an army and uses money as a resource to purchase different military units such as soldiers, tanks, planes, ships, and missiles. Each unit contributes differently to the overall military power of the army.

The player can engage in battles to earn money. Winning battles depends on the total force of the army.

---

## Prewiev

<img width="753" height="479" alt="Ekran Alın2222tısı" src="https://github.com/user-attachments/assets/8c156704-d368-4519-9152-3135148d8ba9" />

---

## Requirements

Before building the project, make sure you have:

- C/C++ (C++17) compatible compiler (GCC, Clang or MSVC)
- CMake 3.15 or newer

---

## Verification of Installation

Check if the required tools are installed:

```bash
cmake --version
g++ --version
```

Both commands should return version information.

### If Not Installed

#### Windows
- Install MinGW (GCC) or Visual Studio (MSVC)
- Make sure the compiler is added to system PATH

#### Linux
```bash
sudo apt update
sudo apt install build-essential cmake
```

#### macOS
```bash
brew install cmake gcc
```

---

## Build and Run

### Clone the Repository
```bash
git clone https://github.com/wdemirkoll/WarSimulator.git
cd WarSimulator
```

### Build the Project
```bash
mkdir build
cd build
cmake ..
cmake --build .
```

### Run the Application

```bash
# Windows
./WarSimulator.exe

# Linux / macOS
./WarSimulator
```

---

## Troubleshooting

### Clean Build
If you encounter build issues, try a clean build:

```bash
rm -rf build
mkdir build && cd build
cmake ..
cmake --build .
```

### Compiler Check
Verify that your compiler is properly installed:

```bash
g++ --version
```

If this fails, the compiler is either not installed or not added to PATH.

### CMake Configuration Issues
If CMake configuration fails:
```bash
cmake --version  # Verify that CMake is 3.15 or newer
which cmake      # (Linux/macOS) or where cmake (Windows)
```

### Build Errors
- Make sure you are using a C/C++ (C++17) compatible compiler
- Check that all dependencies are installed
- Try removing the `build` directory and rebuilding from scratch

---

## **Author**

**Abdüsselam Demirkol**  
### 🗓 Created: April 2026

#### GitHub: wdemirkoll
#### Instagram: https://www.instagram.com/w.demirkoll/
#### Email: wdemirkoll.dev@gmail.com

---

## This is my first project using classes :) :) 
