#pragma once

#include <IMateriaSource.hpp>

class MateriaSource: public	IMateriaSource
{
public:
	MateriaSource( void );
	MateriaSource( const MateriaSource &m );
	~MateriaSource();
	MateriaSource	&operator=( const MateriaSource &m );
	void			learnMateria(AMateria*);
	AMateria*		createMateria( std::string const &type);

private:
	AMateria*	m_inventory[4];
};
