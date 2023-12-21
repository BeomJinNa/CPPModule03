#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 100;
	mAttackDamage = 30;
	std::cout << "A FragTrap has been created." << std::endl;
}

FragTrap::FragTrap(const std::string name)
	: ClapTrap(name)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 100;
	mAttackDamage = 30;
	std::cout << "FragTrap " << mName
			  << " has been created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& source)
	: ClapTrap(source)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 100;
	mAttackDamage = 30;
	std::cout << "FragTrap " << mName
			  << " has been created.(copied)" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& source)
{
	if (this != &source)
	{
		ClapTrap::operator=(source);
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	if (mName.empty())
	{
		std::cout << "A FragTrap has been removed."
				  << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << mName
				  << " has been removed." << std::endl;
	}
}

void	FragTrap::highFivesGuys(void) const
{
	if (mHitPoints > 0)
	{
		std::cout << "FragTrap " << mName << " says \"high five!\"." << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << mName << " can't say." << std::endl;
	}
}
