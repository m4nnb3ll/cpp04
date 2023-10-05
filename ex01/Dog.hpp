#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
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
