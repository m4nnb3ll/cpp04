#include <Cure.hpp>

Cure::~Cure() { }

Cure::Cure( void ) : AMateria("cure") { }

Cure::Cure( const Cure &c ) : AMateria(c.m_type) { }

Cure&	Cure::operator=( const Cure& c )
{
	(void)c;
	return (*this);
}

AMateria*	Cure::clone( void ) const
{
	return (new Cure( *this ));
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}