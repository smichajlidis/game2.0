#include <iostream>
#include "../../includes/location/tavern.h"

Tavern::Tavern(std::string name_val, std::string description_val, std::string choice_1_val, std::string choice_2_val, std::string choice_3_val, std::string choice_4_val)
    : Location(name_val, description_val, choice_1_val, choice_2_val, choice_3_val, choice_4_val) {
    }

Tavern::~Tavern() {
}
