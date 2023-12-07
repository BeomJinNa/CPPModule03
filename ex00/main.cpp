#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	fortyTwo("fortyTwo");
	ClapTrap	seoul("seoul");

	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	fortyTwo.SetDamage(5);
	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	seoul.beRepaired(5);
	fortyTwo.SetDamage(10);
	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	seoul.beRepaired(5);
	seoul.attack("fortyTwo");
	return (0);
}
