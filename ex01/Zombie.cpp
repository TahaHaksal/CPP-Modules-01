#include "Zombie.hpp"

/*
Name the zombie you want to create
@param Name of the zombie
*/
Zombie::Zombie(std::string name)
{
    this->name = name;
}

/*
Zombie announces itself
*/
void    Zombie::announce(void)
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

/*
Zombie dies
*/
Zombie::~Zombie()
{
    std::cout<<name<<": *Deadge*"<<std::endl;
}