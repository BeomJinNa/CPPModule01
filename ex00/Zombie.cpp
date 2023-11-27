#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(const std::string name) { this->name = name; }

Zombie::~Zombie(void)
{
	std::cout << name << " zombie has been removed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie*	newZombie(std::string name) { return (new Zombie(name)); }

void	randomChump(std::string name)
{
	Zombie	chump(name);

	chump.announce();
}
