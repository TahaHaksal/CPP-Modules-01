#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon      *weap;
    std::string human_name;
public:
    HumanA(std::string name, Weapon &weapon_name);
    ~HumanA();
    void    attack();
};
