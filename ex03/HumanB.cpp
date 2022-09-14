#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{

}

void    HumanB::attack()
{
    // std::cout<<this->name<<" attacks with their "<<this->weap.getType();
}

void    HumanB::setWeapon(Weapon type)
{
    this->weap = type;
}
