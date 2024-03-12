#ifndef _ORDERBEERSUCCESS_HPP_
#define _ORDERBEERSUCCESS_HPP_

#include "../NPC.hpp"

class OrderBeerSuccess: public NPC {

public:
    OrderBeerSuccess(std::shared_ptr<Player> player, const std::string& description = "- You are drinking a beer and have fun.",
        const std::string& choice_1 = "Drink another one",
        const std::string& choice_2 = "Ask of something else",
        const std::string& choice_3 = "Say goodbye")
        : NPC(player, description, choice_1, choice_2, choice_3) {}
    
    ~OrderBeerSuccess() = default;
};

#endif