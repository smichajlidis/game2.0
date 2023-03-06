#include <iostream>
#include "../../../includes/location/exploration/dungeons.h"

Location* Dungeons::making_a_choice() {
    char choice;
    std::cout<<"Dungeons...";
    std::cout<<"\n\nPress any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

Dungeons::Dungeons(std::string name_val)
    : Exploration(name_val) {
}

Dungeons::~Dungeons() {
}
