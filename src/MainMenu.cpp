#include "../include/MainMenu.hpp"

#include <iostream>
#include <limits>

void MainMenu::displayMainMenu() {
    std::uint32_t choice {};

    do {
        screen_stuff.clear();
        header_displayer.displayHeader();

        std::cout<<"\t\t      1. New Game\n";
        std::cout<<"\t\t        2. Load\n";
        std::cout<<"\t\t      0. Quit Game\n\n";
        std::cout<<"\t\tWhat do you want to do? ";

        std::cin >> choice;
        screen_stuff.clear();

        switch(choice) {
            case 1:
                game_state.displayLocation();
                break;
            case 2:
                loading_menu.displayLoadingMenu();
                break;
            default:
                break;
        }

    } while(choice);
}