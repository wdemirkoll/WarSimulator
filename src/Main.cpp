#include "Army.h"
#include "Player.h"
#include "Menus.h"
#include "Console.h"
#include <iostream>

int main() {
    Player player;
    Army army;

    int Choose = 0;
    int buyAmount = 0;

    // Initial test gift money
    player.addMoney(1000000);

    while (true) {
        ClearConsole();

        // Gift message
        std::cout << "Hello, I am giving you some money as a gift for testing my project. ";
        std::cout << "You can test the game :)\n\n";

        // Display player money and main menu
        player.showMoney();
        showMenu();

        std::cout << "Choose an option: ";
        std::cin >> Choose;

        switch (Choose) {
            case 1: // Battle option
                if (army.getTotalForce() >= 7) {
                    player.addMoney(10000);

                    // Reduce units after battle
                    army.removeSoldier(10000);
                    army.removeTank(50);
                    army.removePlane(30);
                    army.removeShip(10);
                    army.removeMissile(5);

                    Pause();
                } 
                else {
                    std::cout << "Requires a -total- power of at least 7 to fight\n";
                    Pause();
                }
                break;

            case 2: // Buy menu
                showBuyMenu();

                std::cout << "Choose what to buy: ";
                std::cin >> Choose;

                switch (Choose) {
                    case 1: // Soldier
                        std::cout << "Enter soldier amount: ";
                        std::cin >> buyAmount;

                        if (buyAmount > 0 && player.getMoney() >= buyAmount) {
                            player.spendMoney(buyAmount);
                            army.addSoldier(buyAmount);
                            std::cout << buyAmount << " soldiers bought\n";
                        } 
                        else {
                            std::cout << "Not enough money or invalid amount..\n";
                        }
                        break;

                    case 2: // Tank
                        std::cout << "Enter tank amount: ";
                        std::cin >> buyAmount;

                        if (buyAmount > 0 && player.getMoney() >= buyAmount * 15) {
                            player.spendMoney(buyAmount * 15);
                            army.addTank(buyAmount);
                            std::cout << buyAmount << " tanks bought\n";
                        } 
                        else {
                            std::cout << "Not enough money or invalid amount..\n";
                        }
                        break;

                    case 3: // Plane
                        std::cout << "Enter plane amount: ";
                        std::cin >> buyAmount;

                        if (buyAmount > 0 && player.getMoney() >= buyAmount * 50) {
                            player.spendMoney(buyAmount * 50);
                            army.addPlane(buyAmount);
                            std::cout << buyAmount << " planes bought\n";
                        }
                        else {
                            std::cout << "Not enough money or invalid amount..\n";
                        }
                        break;

                    case 4: // Ship
                        std::cout << "Enter ship amount: ";
                        std::cin >> buyAmount;

                        if (buyAmount > 0 && player.getMoney() >= buyAmount * 500) {
                            player.spendMoney(buyAmount * 500);
                            army.addShip(buyAmount);
                            std::cout << buyAmount << " ships bought\n";
                        } 
                        else {
                            std::cout << "Not enough money or invalid amount..\n";
                        }
                        break;

                    case 5: // Missile
                        std::cout << "Enter missile amount: ";
                        std::cin >> buyAmount;

                        if (buyAmount > 0 && player.getMoney() >= buyAmount * 5000) {
                            player.spendMoney(buyAmount * 5000);
                            army.addMissile(buyAmount);
                            std::cout << buyAmount << " missiles bought\n";
                        } else {
                            std::cout << "Not enough money or invalid amount..\n";
                        }
                        break;

                    default:
                        std::cout << "Invalid option!\n";
                        break;
                }

                Pause();
                break;

            case 3:
                std::cout << "Exiting game... byee! :)\n";
                Pause();
                return 0;

            default:
                std::cout << "Invalid option. Please try again...\n";
                Pause();
                break;
        }
    }
}