#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	fortyTwo("fortyTwo");
	DiamondTrap	seoul("seoul");

	fortyTwo.highFivesGuys();
	seoul.highFivesGuys();
	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	seoul.beRepaired(20);
	fortyTwo.SetDamage(150);
	fortyTwo.attack("seoul");
	seoul.takeDamage(fortyTwo.GetDamage());
	seoul.beRepaired(150);
	fortyTwo.highFivesGuys();
	seoul.highFivesGuys();
	fortyTwo.whoAmI();
	seoul.whoAmI();
	fortyTwo = seoul;
	fortyTwo.whoAmI();
	return (0);
}
