#include "Zombie.hpp"

Zombie  *zombieHorde(int n, std::string name)
{
    Zombie  *list = (Zombie *)malloc (sizeof(Zombie) * n + 1);

    for (int i = 0; i < n; i++)
    {
        // list[i] = Zombie(name);
        new(&list[i])   Zombie(name);
    }
    return (list);
}