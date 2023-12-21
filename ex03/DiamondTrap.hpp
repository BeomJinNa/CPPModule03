#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap& source);
		DiamondTrap&	operator=(const DiamondTrap& source);
		virtual ~DiamondTrap(void);
		void			whoAmI(void) const;
	private:
		std::string	mName;
};
#endif
