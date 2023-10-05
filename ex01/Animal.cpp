#include "Animal.hpp"

Animal::Animal()
	:	type("Animal") {};

Animal::~Animal() {std::cout << "I am a destructor" << std::endl;};

Animal::Animal(const std::string &name)
	:	type(name) {};

Animal::Animal(const Animal& animal)
	:	type(animal.type) { std::cout << "copied" << std::endl; };

Animal &Animal::operator=(const Animal& animal)
{
	if (this != &animal)
		this -> type = animal.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "♫ Generic Animal sound ♫" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (this -> type);
}