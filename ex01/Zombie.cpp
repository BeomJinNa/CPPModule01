#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {}
Zombie::Zombie(std::string name) { this->name = name; }

Zombie::~Zombie(void)
{
	std::cout << name << " zombie has been removed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(std::string& name)
{
	this->name = name;
}

Zombie*	newZombie(std::string name) { return (new Zombie(name)); }

void	randomChump(std::string name)
{
	Zombie	chump(name);

	chump.announce();
}
