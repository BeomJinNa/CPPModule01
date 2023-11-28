#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	heapZombie1;
	Zombie*	heapZombie2;

	randomChump("42seoul");
	randomChump("cpp zombie");

	heapZombie1 = newZombie("heapZombie1");
	heapZombie2 = newZombie("heapZombie2");
	heapZombie1->announce();
	heapZombie2->announce();

	delete heapZombie1;
	delete heapZombie2;

	return (0);
}
