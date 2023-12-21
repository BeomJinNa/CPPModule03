#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: mHitPoints(10)
	, mEnergyPoints(10)
	, mAttackDamage(0)
	, mMaxHitPoints(10)
{
	std::cout << "A ClapTrap has been created." << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
	: mName(name)
	, mHitPoints(10)
	, mEnergyPoints(10)
	, mAttackDamage(0)
	, mMaxHitPoints(10)
{
	std::cout << "ClapTrap " << mName
			  << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source)
	: mName(source.mName)
	, mHitPoints(source.mHitPoints)
	, mEnergyPoints(source.mEnergyPoints)
	, mAttackDamage(source.mAttackDamage)
	, mMaxHitPoints(source.mMaxHitPoints)
{
	std::cout << "ClapTrap " << mName
			  << " has been created.(copied)" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& source)
{
	if (this != &source)
	{
		mName = source.mName;
		mHitPoints = source.mHitPoints;
		mEnergyPoints = source.mEnergyPoints;
		mAttackDamage = source.mAttackDamage;
		mMaxHitPoints = source.mMaxHitPoints;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	if (mName.empty())
	{
		std::cout << "A ClapTrap has been removed."
				  << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << mName
				  << " has been removed." << std::endl;
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (mHitPoints > 0 && mEnergyPoints > 0)
	{
		--mEnergyPoints;
		std::cout << "ClapTrap " << mName << " attacks "
				  << target << ", causing " << mAttackDamage
				  << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << mName << " can't attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > mHitPoints)
		mHitPoints = 0;
	else
		mHitPoints -= amount;
	std::cout << "ClapTrap " << mName << " takes "
			  << amount << " damage." << std::endl;
	if (mHitPoints == 0)
		std::cout << "ClapTrap " << mName << " is dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (mHitPoints > 0 && mEnergyPoints > 0)
	{
		--mEnergyPoints;
		if (amount > mMaxHitPoints - mHitPoints)
			mHitPoints = mMaxHitPoints;
		else
			mHitPoints += amount;
		std::cout << "ClapTrap " << mName
				  << " is repaired by " << amount
				  << "." << std::endl;
	}
	else
		std::cout << "ClapTrap " << mName << " can't be repaired."
				  << std::endl;
}

unsigned	ClapTrap::GetDamage(void) const { return (mAttackDamage); }

void		ClapTrap::SetDamage(unsigned int amount)
{
	mAttackDamage = amount;
}
