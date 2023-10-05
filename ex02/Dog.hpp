#pragma once
#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
public:
	Dog();
	~Dog();
	Dog(const Dog& name);
	Dog&	operator=(const Dog& Dog);
	void	makeSound() const;
private:
	Brain	*brain;
};
