#include <Character.hpp>

Character::Character( void )
	:	m_name("Undefined")
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = NULL;
}

Character::Character(const std::string& name )
	:	m_name(name)
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->m_inventory[i];
}

Character::Character( const Character &c )
	:	m_name(c.m_name)
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = c.m_inventory[i]
									? c.m_inventory[i]->clone() : NULL ;
}

Character	&Character::operator=( const Character &c )
{
	if (this != &c)
	{
		this->m_name = c.m_name;
		for (int i = 0; i < 4; i++)
		{
			if (this->m_inventory[i])
				delete(this->m_inventory[i]);
			this->m_inventory[i] = c.m_inventory[i]
									? c.m_inventory[i]->clone() : NULL;
		}
	}
	return (*this);
}

std::string	const	&Character::getName( void ) const
{
	return (this->m_name);
}

void	Character::equip( AMateria	*m )
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->m_inventory[i])
		{
			this->m_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip( int	idx )
{
	if (idx >= 0 && idx < 4 && this->m_inventory[idx])
		this->m_inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter	&target )
{
	if (idx >= 0 && idx < 4 && this->m_inventory[idx])
		this->m_inventory[idx]->use(target);
}
