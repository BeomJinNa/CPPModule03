#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 30;
	ClapTrap::mName = "_clap_name";
	std::cout << "A DiamondTrap has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name)
	: ClapTrap(name)
	, ScavTrap(name)
	, FragTrap(name)
	, mName(name)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 30;
	ClapTrap::mName = mName + "_clap_name";
	std::cout << "DiamondTrap " << mName
			  << " has been created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source)
	: ClapTrap(source)
	, ScavTrap(source)
	, FragTrap(source)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 30;
	std::cout << "DiamondTrap " << mName
			  << " has been created.(copied)" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& source)
{
	if (this != &source)
	{
		ScavTrap::operator=(source);
		FragTrap::operator=(source);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	if (mName.empty())
	{
		std::cout << "A DiamondTrap has been removed."
				  << std::endl;
	}
	else
	{
		std::cout << "DiamondTrap " << mName
				  << " has been removed." << std::endl;
	}
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "Diamond Name : " << mName << " | ClapTrap Name : "
			  << ClapTrap::mName << std::endl;
}
