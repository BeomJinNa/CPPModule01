#include "Weapon.hpp"

Weapon::Weapon(void) {}
Weapon::Weapon(const std::string weaponType)
: mType(weaponType) {}

const std::string&	Weapon::getType(void) const { return (mType); }
void				Weapon::setType(const std::string &newType) { mType = newType; }
