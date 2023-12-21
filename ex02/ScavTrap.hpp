#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap& source);
		ScavTrap&		operator=(const ScavTrap& source);
		virtual ~ScavTrap(void);
		virtual void	attack(const std::string& target);
		void			guardGate(void) const;
	private:
		bool	mModeGuard;
};
#endif
