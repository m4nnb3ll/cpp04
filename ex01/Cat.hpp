#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(const Cat& name);
	Cat&	operator=(const Cat& Cat);
	void	makeSound() const;
private:
	Brain	*brain;
};
