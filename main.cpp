#include <iostream>
#include <cstdlib>
#include "includes.h"

int main() {

MainMenu main_menu;

int i {1};
main_menu.get_i_ptr(&i);
do {
    GameState game_state(&i);
    ScreenStuff screen_stuff;
    main_menu.display_menu();
    while(i == 1) {
        screen_stuff.clear();
        game_state.display_location();
    }
} while (i != 0);
    return 0;
}