#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string name);
		FragTrap(const FragTrap& source);
		FragTrap&	operator=(const FragTrap& source);
		virtual ~FragTrap(void);
		void		highFivesGuys(void) const;
	private:
};
#endif
