#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& source);
		ClapTrap&		operator=(const ClapTrap& source);
		virtual ~ClapTrap(void);
		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		unsigned		GetDamage(void) const;
		void			SetDamage(unsigned int amount);
	protected:
		std::string		mName;
		unsigned int	mHitPoints;
		unsigned int	mEnergyPoints;
		unsigned int	mAttackDamage;
		unsigned int	mMaxHitPoints;
};
#endif
