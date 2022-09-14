#include "Weapon.hpp"

Weapon::Weapon(std::string  name)
{
    this->type = name;
}

Weapon::~Weapon()
{
}

const std::string* Weapon::getType()
{
    return &this->type;
}

void    Weapon::setType(std::string &new_name)
{
    &this->type = new_name;
}