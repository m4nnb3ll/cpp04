#include <MateriaSource.hpp>

MateriaSource::MateriaSource( void )
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->m_inventory[i];
}

MateriaSource::MateriaSource( const	MateriaSource &m )
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = m.m_inventory[i]
									? m.m_inventory[i]->clone() : NULL ;
}

MateriaSource	&MateriaSource::operator=( const MateriaSource &m )
{
	if (this != &m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->m_inventory[i])
				delete(this->m_inventory[i]);
			this->m_inventory[i] = m.m_inventory[i]
									? m.m_inventory[i]->clone() : NULL;
		}
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->m_inventory[i])
		{
			this->m_inventory[i] = m;
			return ;
		}
	}
	std::cout << "couldn't learn material" << std::endl;
}

AMateria*	MateriaSource::createMateria( std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (m_inventory[i]->getType() == type)
			return (m_inventory[i]->clone());
	}
	return (0);
}
