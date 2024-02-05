#pragma once

# include <AMateria.hpp>

class Cure: public AMateria
{
public:
	Cure( void );
	~Cure();
	Cure( const Cure& c );
	Cure&		operator=( const Cure& c );
	AMateria*	clone( void ) const;
	void		use( ICharacter &target );
};
