#include "A_Animal.hpp"

A_Animal::A_Animal()
	:	type("A_Animal") {};

A_Animal::~A_Animal() {std::cout << "I am a destructor" << std::endl;};

A_Animal::A_Animal(const std::string &name)
	:	type(name) {};

A_Animal::A_Animal(const A_Animal& animal)
	:	type(animal.type) { std::cout << "copied" << std::endl; };

A_Animal &A_Animal::operator=(const A_Animal& animal)
{
	if (this != &animal)
		this -> type = animal.type;
	return (*this);
}

void	A_Animal::makeSound() const
{
	std::cout << "♫ Generic A_Animal sound ♫" << std::endl;
}

const std::string	&A_Animal::getType(void) const
{
	return (this -> type);
}