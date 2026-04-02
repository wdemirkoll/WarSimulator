#include "Console.h"
#include <iostream>

// Keeping the console clean
void ClearConsole() {
 #ifdef _WIN32
    // Windows
    system("cls"); 
#else
    // Linux / Mac
    std::cout << "\033[2J\033[1;1H"; 
#endif
}

// Added pause to avoid bugs
void Pause() {
    std::cout << "\nPress ENTER to continue... ";
    std::cin.ignore();
    std::cin.get();
}

// Trying not to use user choice too much
void Choose() {
    std::cout << "Choose: ";
    std::cin >> Choose;
}