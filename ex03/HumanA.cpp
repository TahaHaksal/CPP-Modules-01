#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_name) : human_name(name), weap(&weapon_name) {}

HumanA::~HumanA()
{
    std::cout<<human_name<<" died"<<std::endl;
}

void    HumanA::attack()
{
    std::cout<<human_name<<" attacks with their "<<weap->getType()<<std::endl;
}
