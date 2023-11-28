#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie*	horde;

	std::cout << "\033[33mTime to create a horde of Zombies!\033[0m" << std::endl;
	horde = zombieHorde(10, "one of them");
	for (int i = 0; i < 10; ++i)
	{
		std::cout << "[" << i << "] ";
		horde[i].announce();
	}

	delete[] horde;
	return (0);
}
