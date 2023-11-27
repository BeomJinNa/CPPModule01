#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public:
		Weapon(void);
		Weapon(const std::string weaponType);
		const std::string&	getType(void) const;
		void				setType(const std::string &newType);
	private:
		std::string	mType;
};
#endif
