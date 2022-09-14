#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

class   Zombie
{
    public:
    Zombie(std::string name);
    ~Zombie();
    void    announce(void);

    private:
    std::string name;
};

Zombie  *zombieHorde(int n, std::string name);