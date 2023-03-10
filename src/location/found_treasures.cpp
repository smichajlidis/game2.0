#include <iostream>
#include <ctime>
#include "../../includes/location/found_treasures.h"

Location* FoundTreasures::making_a_choice() {
    char choice {};
    srand(time(NULL));
    Item* ptr = related_items.at(std::rand() % related_items.size());
    (*player).equipment.add_item(ptr);
    std::cout<<"You found "<<ptr->return_name()<<"!\n";
    std::cout<<"\n[+ "<<ptr->return_name()<<"]\n\n";
    std::cout<<"Press any key to continue: ";
    std::cin>>choice;
    return related_locations.at(0);
}

FoundTreasures::FoundTreasures(std::string name_val)
    : Location(name_val) {
}

FoundTreasures::~FoundTreasures() {
}