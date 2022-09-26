#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout
	<<"**Debug**"<<std::endl
	<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<<std::endl;
}
void	Harl::info( void )
{
	std::cout
	<<"**Info**"<<std::endl
	<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<<std::endl;
}
void	Harl::warning( void )
{
	std::cout
	<<"**Warning**"<<std::endl
	<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<<std::endl;
}
void	Harl::error( void )
{
	std::cout
	<<"**Error**"<<std::endl
	<<"This is unacceptable! I want to speak to the manager now."
	<<std::endl;
}

// https://isocpp.org/wiki/faq/pointers-to-members#array-memfnptrs
//array of pointer to member functions info ^

void	Harl::complain(std::string level)
{
	std::string levels[4] = { "debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*_comments[i])();
			break ;
		}
	}
}
