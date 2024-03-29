#ifndef _LIVINGBEING_HPP_
#define _LIVINGBEING_HPP_

#include <vector>
#include <memory>

#include "Item.hpp"

class LivingBeing {

public:
    LivingBeing(std::uint16_t hp = 100, std::uint16_t strength = 5)
        : hp(hp), strength(strength) {}

    ~LivingBeing() = default;

    std::uint16_t getStrength() const;
    std::uint16_t getHP() const;
    void increaseHP(std::uint16_t);
    virtual void printEquipment() const;
    std::uint16_t getEquipmentSize() const;
    void addItem(const Item& item);
    void deleteItem(const std::string& val);
    Item moveItem(const std::string& val);

protected:
    std::uint16_t hp;
    std::uint16_t strength;
    std::vector<Item> equipment;
    Item active_weapon;
};

#endif