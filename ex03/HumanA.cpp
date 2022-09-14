#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon_name)
{
    this->name = name;
    this->weap = &weapon_name;
}

HumanA::~HumanA()
{

}

void    HumanA::attack()
{
    std::cout<<this->name<<" attacks with their "<<*this->weap->getType()<<std::endl;
}