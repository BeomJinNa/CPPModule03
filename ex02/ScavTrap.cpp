#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: mModeGuard(false)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 20;
	std::cout << "A ScavTrap has been created." << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
	: ClapTrap(name)
	, mModeGuard(false)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 20;
	std::cout << "ScavTrap " << mName
			  << " has been created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source)
	: ClapTrap(source)
	, mModeGuard(false)
{
	mHitPoints = 100;
	mMaxHitPoints = 100;
	mEnergyPoints = 50;
	mAttackDamage = 20;
	std::cout << "ScavTrap " << mName
			  << " has been created.(copied)" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& source)
{
	if (this != &source)
	{
		ClapTrap::operator=(source);
		mModeGuard = source.mModeGuard;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	if (mName.empty())
	{
		std::cout << "A ScavTrap has been removed."
				  << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << mName
				  << " has been removed." << std::endl;
	}
}

void	ScavTrap::attack(const std::string& target)
{
	if (mHitPoints > 0 && mEnergyPoints > 0)
	{
		--mEnergyPoints;
		std::cout << "ScavTrap " << mName << " attacks "
				  << target << ", causing " << mAttackDamage
				  << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << mName << " can't attack." << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	if (mModeGuard)
	{
		std::cout << "ScavTrap " << mName
				  << " is now in Gate keeper mode." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << mName
				  << " is not now in Gate keeper mode." << std::endl;
	}
}
