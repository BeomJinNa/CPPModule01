#include "Harl.hpp"

#include <iostream>

Harl::Harl(void)
{
}
Harl::~Harl(void)
{
}

void Harl::complain(std::string level) const
{
	int							index = -1;
	static const std::string	lookUpTable[4]
		= {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; ++i)
	{
		if (level == lookUpTable[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
					  << std::endl;
	}
}

void Harl::debug(void) const
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my "
			     "7XL-double-cheese-triple-pickle-special- "
			     "ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. "
			     "You didn’t put enough bacon in my burger! If you did, "
			     "I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. "
			     "I’ve been coming for years whereas you started working "
			     "here since last month.\n" << std::endl;
}

void Harl::error(void) const
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"
			  << std::endl;
}
