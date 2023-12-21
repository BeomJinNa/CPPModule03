#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fortyTwo("fortyTwo");
	FragTrap	seoul("seoul");

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
	return (0);
}
