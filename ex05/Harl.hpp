#pragma once
#include <iostream>
#include <string>

class Harl;

typedef  void (Harl::*HarlMemfunc)();

class Harl
{
private:
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
	HarlMemfunc	_comments[5];
public:
	void		complain(std::string level);
};

