#include "Weapon.hpp"

Weapon::Weapon(std::string  name)
{
    type = name;
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType()
{
    return type;
}

void    Weapon::setType(std::string new_name)
{
    type = new_name;
}
