#include <Ice.hpp>

Ice::~Ice() { }

Ice::Ice( void ) : AMateria("ice") { }

Ice::Ice( const Ice &i ) : AMateria(i.m_type) { }

Ice&	Ice::operator=( const Ice& i )
{
	(void)i;
	return (*this);
}

AMateria*	Ice::clone( void ) const
{
	return (new Ice( *this ));
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
