#include <iostream>
#include "Zombie.hpp"

int	main(void)
{
	Zombie*	heapZombie1;
	Zombie*	heapZombie2;
	Zombie*	horde;

	randomChump("42seoul");
	randomChump("cpp zombie");

	heapZombie1 = newZombie("heapZombie1");
	heapZombie2 = newZombie("heapZombie2");
	heapZombie1->announce();
	heapZombie2->announce();

	delete heapZombie1;
	delete heapZombie2;

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
