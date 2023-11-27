#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
	: mName(name) {}

void	HumanB::attack(void) const
{
	std::cout << mName << " attacks with their "
		<< mWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(const Weapon& weapon) { mWeapon = &weapon; }
