#pragma once

#include <AMateria.hpp>

class Character: public	ICharacter
{
public:
	Character( void );
	Character( const std::string& name );
	~Character();
	Character( const Character &c );
	Character&	operator=( const Character &c );
	const std::string&	getName( void ) const;
	void				equip( AMateria	*m );
	void				unequip( int idx );
	void				use( int idx, ICharacter& target );
private:
	AMateria	*m_inventory[4];
	std::string	m_name;
};