#include "HumanB.hpp"

HumanB::HumanB(std::string name) : human_name(name)
{}

HumanB::~HumanB()
{
	std::cout<<human_name<<" died"<<std::endl;
}

void    HumanB::attack()
{
    std::cout<<human_name<<" attacks with their "<<weap->getType()<<std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    weap = &type;
}
