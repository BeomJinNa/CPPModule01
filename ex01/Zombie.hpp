#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
	public:
		Zombie(void);
		Zombie(const std::string name);
		~Zombie(void);
		void	announce(void) const;
		void	SetName(const std::string& name);
	private:
		std::string	name;
};

Zombie*	zombieHorde(int N, std::string name);
#endif
