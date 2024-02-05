#pragma once

# include <ICharacter.hpp>

class AMateria
{
public:
	AMateria( void );
	AMateria(std::string const & type);
	virtual	~AMateria();
	AMateria( const AMateria &a );
	AMateria&	operator=( const AMateria &a );
	const std::string& getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
protected:
	std::string const	m_type;
};