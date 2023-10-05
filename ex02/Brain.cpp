#include "Brain.hpp"

Brain::Brain() {};

Brain::~Brain() {std::cout << "brain destructor" << std::endl;};

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << "copied" << std::endl;
};

Brain &Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	std::cout << "assigned" << std::endl;
	return (*this);
}

