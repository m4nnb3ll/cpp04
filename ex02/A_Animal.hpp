#pragma once
#include <iostream>

class A_Animal
{
public:
	A_Animal();
	virtual	~A_Animal();
	A_Animal(const std::string &name);
	A_Animal(const A_Animal& name);
	A_Animal&			operator=(const A_Animal& animal);
	virtual void		makeSound() const = 0;
	const std::string	&getType(void) const;
protected:
	std::string	type;
};
