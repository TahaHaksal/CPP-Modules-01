#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
    std::string human_name;
    Weapon      *weap;
public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &type);
};
