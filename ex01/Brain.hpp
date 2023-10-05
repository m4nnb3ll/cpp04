#pragma once
#include <iostream>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain& name);
	Brain&	operator=(const Brain& animal);
private:
	std::string	ideas[100];
};
