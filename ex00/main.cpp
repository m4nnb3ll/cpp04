/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelayad <abelayad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:04:49 by abelayad          #+#    #+#             */
/*   Updated: 2023/10/05 15:09:57 by abelayad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal
{
public:
	Animal(void) : type("Animal") {};
	Animal(const std::string &name) : type(name)  {};
	~Animal(void){ std::cout << "Destructor called!" << std::endl; };
	virtual void	makeSound(void) const {};
	const std::string		&getType(void) const
	{
		return (this->type);
	}
protected:
	std::string	type;
};

class Dog : public Animal
{
public:
	Dog(void) : Animal("Dog") {};
	~Dog(void){ std::cout << "Destructor of Dog called!" << std::endl; };
	void	makeSound(void) const { std::cout << this->type << ": Bark!" << std::endl;};
};

class Cat : public Animal
{
public:
	Cat(void) : Animal("Cat") {};
	~Cat(void){ std::cout << "Destructor of Cat called!" << std::endl; };
	void	makeSound(void) const { std::cout << this->type << ": Meaow!" << std::endl;};
};

class WrongAnimal
{
public:
	WrongAnimal(void) : type("WrongAnimal") {};
	WrongAnimal(const std::string &name) : type(name)  {};
	~WrongAnimal(void){ std::cout << "Wrong Animal Destructor called!" << std::endl; };
	void	makeSound(void) const { std::cout << "I am the sound of the Wrong animal!" << std::endl;};
	const std::string		&getType(void) const
	{
		return (this->type);
	}
protected:
	std::string	type;
};

class WrongCat : public WrongAnimal
{
public:
	WrongCat(void) : WrongAnimal("WrongCat") {};
	~WrongCat(void){ std::cout << "Destructor of WrongCat called!" << std::endl; };
	void	makeSound(void) const { std::cout << this->type << ": Meaow!" << std::endl;};
};


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongCat->makeSound();
	return 0;
}