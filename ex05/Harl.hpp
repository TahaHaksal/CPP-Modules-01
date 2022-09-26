#pragma once
#include <iostream>
#include <string>

#define CALL_MEMBER_FN(object,ptrToMember)  ((object).*(ptrToMember))

class Harl;

typedef  void (Harl::*HarlMemfunc)();

class Harl
{
private:
	void		debug( void );
	void		info( void );
	void		warning( void );
	void		error( void );
	HarlMemfunc	_comments[5] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error,};
public:
	void		complain(std::string level);
};

