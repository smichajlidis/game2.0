#ifndef _FOREST_H_
#define _FOREST_H_
#include <iostream>

class Forest: public Location {

public:

    virtual Location* making_a_choice();

    Forest(std::string name_val = "forest", std::string description_val = "Walking between trees.", std::string choice_1_val = "Forest exploration", std::string choice_2_val = "Go to thugs");
    ~Forest();

};

#endif