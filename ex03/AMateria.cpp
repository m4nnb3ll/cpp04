#include <AMateria.hpp>

AMateria::AMateria( void ): m_type("undefined") { }

AMateria::AMateria( std::string const & type ): m_type(type) { }

AMateria::~AMateria() { }

AMateria::AMateria( const AMateria &m ): m_type(m.m_type) { }

AMateria&	AMateria::operator=( const AMateria &a )
{
	(void)a;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->m_type);
}

void	AMateria::use( ICharacter &target)
{
	(void) target;
}
