#ifndef _DUNGEONS_H_
#define _DUNGEONS_H_
#include <iostream>

class Dungeons: public Exploration {

public:

    virtual Location* making_a_choice();

    Dungeons(std::string name_val="dungeons");
    ~Dungeons();
};

#endif
