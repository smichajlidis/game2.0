#ifndef _GAME_STATE_H_
#define _GAME_STATE_H_
#include <iostream>
#include "creature/player.h"
#include "location/chapel.h"
#include "location/forest.h"
#include "location/square.h"
#include "location/tavern.h"
#include "location/innkeeper.h"
#include "location/gamblers.h"
#include "location/ladies.h"
#include "location/priest.h"
#include "location/thugs.h"
#include "location/altars.h"
#include "location/order_beer.h"
#include "location/trade.h"
#include "equipment.h"
#include "item/weapon/hunting_weapon/bow.h"
#include "item/weapon/sword.h"

class GameState {

    Player player;

    Bow bow;
    Sword sword;

    Chapel chapel;
    Forest forest;
    Square square;

    Tavern tavern;
        OrderBeer order_beer;
        Trade trade;

    Innkeeper innkeeper;
    Gamblers gamblers;
    Ladies ladies;
    Priest priest;
    Thugs thugs;
    Altars altars;


    Location *current_location;

public:

    void display_location();

    GameState();
    ~GameState();

};

#endif