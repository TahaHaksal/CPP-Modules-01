#include "Zombie.hpp"

int     main(void)
{
    int     n = 5;
    Zombie  *arr = zombieHorde(n, "Ali");
    Zombie  *temp;

    for (int i = 0; i < n; i++)
    {
        arr[i].announce();
        arr[i].~Zombie();
    }
    free(arr);
    exit(0);
}