#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {}
Zombie::Zombie(const std::string name) { this->name = name; }

Zombie::~Zombie(void)
{
	std::cout << name << " zombie has been removed." << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::SetName(const std::string& name)
{
	this->name = name;
}
