#ifndef _TRADE_HPP_
#define _TRADE_HPP_

#include "../NPC.hpp"

class Trade: public NPC {

public:
    Trade(std::shared_ptr<Player> player, const std::string& description = "Would you like to buy or sell something?",
        const std::string& choice_1 = "Buy",
        const std::string& choice_2 = "Sell",
        const std::string& choice_3 = "Return")
        : NPC(player, description, choice_1, choice_2, choice_3) {}
    
    ~Trade() = default;
};

#endif