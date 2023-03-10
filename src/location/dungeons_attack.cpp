#include <iostream>
#include "../../includes/location/dungeons_attack.h"

Location* DungeonsAttack::making_a_choice() {
    char choice {};
    int hit {};
    bool run {false};
    srand(time(NULL)); 
    Creature* enemy = (related_creatures.at(std::rand() % related_creatures.size()))->clone();
    std::cout<<"You have been attacked by "<<enemy->return_name()<<"\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    do {
        clear();
        (*player).display_top_bar();
        (*enemy).display_enemy();
        std::cout<<"1. Attack\n";
        std::cout<<"0. Run\n\n";
        std::cout<<"What do you do? ";
        std::cin>>choice;
        switch (choice) {
            case '0': {
                switch(std::rand() % 2) {
                    case 1: clear(); (*player).display_top_bar(); (*enemy).display_enemy(); std::cout<<"Success! You run away\n"; run = true; break;
                    default: clear(); (*player).display_top_bar(); (*enemy).display_enemy(); std::cout<<"Unfortunately you failed to escape\n"; break;
                }
            break;
            }
            case '1': {
                clear();
                (*player).display_top_bar();
                (*enemy).display_enemy();
                hit = (*player).return_hitForce();
                std::cout<<"You hit with "<<hit<<" force\n";
                (*enemy).decrease_hp(hit);
                if ((*enemy).return_hp() < 0) std::cout<<(*enemy).return_name()<<" defeated!\n";
                break;
            } 
            default: break;
        }
        if ((*enemy).return_hp() > 0 && run == false) {
            hit = (*enemy).return_hitForce();
            std::cout<<"Enemy hit with "<<hit<<" force\n";
            (*player).decrease_hp(hit);
            if ((*player).return_hp() < 0) {
                std::cout<<"You are dead.\n";
                change_i();
            }
            else {
            std::cout<<"\nPress any key to continue: ";
            std::cin>>choice;
            }
        }
    } while (run == false && (*player).return_hp() > 0 && (*enemy).return_hp() > 0);
    std::cout<<"\nPress any key to continue: ";
    std::cin>>choice;
    
    return related_locations.at(0);
}

void DungeonsAttack::change_i() {
    *i_ptr = 2; //just not zero and not one
}

void DungeonsAttack::get_i_ptr(int* i) {
    i_ptr = i;
}


DungeonsAttack::DungeonsAttack(std::string name_val)
    : Location(name_val) {
}

DungeonsAttack::~DungeonsAttack() {
}