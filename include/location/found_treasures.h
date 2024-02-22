#ifndef _FOUNDTREASURES_H_
#define _FOUNDTREASURES_H_

#include "../Location.hpp"

class Item;

#include <vector>

class FoundTreasures: public Location {

    std::vector <Item*> related_items;

    public:


    FoundTreasures();
    ~FoundTreasures();

    friend class GameState;
};

#endif