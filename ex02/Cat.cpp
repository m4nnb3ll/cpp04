#include "Cat.hpp"

Cat::Cat()
	:	A_Animal("Cat"), brain(new Brain()) {};

Cat::~Cat()
{
	delete this->brain;
	std::cout << "I am a cat destructor" << std::endl;
};

Cat::Cat(const Cat& cat)
{
	this->type = cat.type;
	if (cat.brain)
		this->brain = new Brain(*cat.brain);
	std::cout << "copied" << std::endl;
};

Cat &Cat::operator=(const Cat& cat)
{
	if (this != &cat)
	{
		this -> type = cat.type;
		if (cat.brain)
		{
			delete this->brain;
			this->brain = new Brain(*cat.brain);
		}
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "♫ Generic Cat sound ♫" << std::endl;
}