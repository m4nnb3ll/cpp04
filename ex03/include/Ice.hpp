#pragma once

# include <AMateria.hpp>

class Ice: public AMateria
{
public:
	Ice( void );
	~Ice();
	Ice( const Ice& i );
	Ice&		operator=( const Ice& i );
	AMateria*	clone( void ) const;
	void		use( ICharacter &target );
};
