#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
	:	Animal("Dog"), brain(new Brain()) {};

Dog::~Dog()
{
	delete this->brain;
	std::cout << "I am a dog destructor" << std::endl;
};

Dog::Dog(const Dog& dog)
{
	this->type = dog.type;
	if (dog.brain)
		this->brain = new Brain(*dog.brain);
	std::cout << "copied" << std::endl;
};

Dog &Dog::operator=(const Dog& dog)
{
	if (this != &dog)
	{
		this -> type = dog.type;
		if (dog.brain)
		{
			delete this->brain;
			this->brain = new Brain(*dog.brain);
		}
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "♫ Generic Dog sound ♫" << std::endl;
}