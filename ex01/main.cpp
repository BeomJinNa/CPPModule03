#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	fortyTwo("fortyTwo");
	ScavTrap	seoul("seoul");

	fortyTwo.guardGate();
	seoul.guardGate();
	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	seoul.beRepaired(20);
	fortyTwo.SetDamage(5);
	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	seoul.beRepaired(5);
	return (0);
}
