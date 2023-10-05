#pragma once
#include <iostream>

class Animal
{
public:
	Animal();
	virtual	~Animal();
	Animal(const std::string &name);
	Animal(const Animal& name);
	Animal&				operator=(const Animal& animal);
	virtual void		makeSound() const;
	const std::string	&getType(void) const;
protected:
	std::string	type;
};
