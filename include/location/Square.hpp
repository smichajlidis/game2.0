#ifndef _SQUARE_HPP_
#define _SQUARE_HPP_

#include "../Location.hpp"

class Square: public Location {

public:
    Square(std::shared_ptr<GameState> game_state = nullptr, const std::string& description = "You are standing on a square. You see a tavern on the right. On the left - a chapel. Behind you is an entrance to forest.",
        const std::string& choice_1 = "Go to the tavern",
        const std::string& choice_2 = "Go to forest",
        const std::string& choice_3 = "Go to the chapel");

    ~Square() = default;

};

#endif