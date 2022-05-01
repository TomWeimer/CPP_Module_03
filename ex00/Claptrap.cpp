#include "Claptrap.hpp"
using namespace std;
Claptrap::Claptrap(string newName) : name_(newName), hit_(10), energy_(10), attack_(0)
{
	cout << "Constructor called" << endl;
	this->name_ = newName;
}
Claptrap::Claptrap()
{

}

Claptrap::Claptrap(const Claptrap& otherClaptrap)
{
	cout << "Copy constructor called" << endl;
	this->name_ = otherClaptrap.getName();
}
int Claptrap::getAttack(void)const
{
	cout << "getAttack called" << endl;
	return (this->attack_);
}
int Claptrap::getHit(void)const
{
		cout << "getHit called" << endl;
	return(this->hit_);
}
int Claptrap::getEnergy(void)const
{
		cout << "getEnergy called" << endl;
		return(this->energy_);
}
string Claptrap::getName(void)const
{
	cout << "getName called" << endl;
	return (this->name_);
}

Claptrap& Claptrap::operator=(const Claptrap& origin)
{
	cout << "Copy assignment operator called" << endl;
	if (this == &origin)
		return (*this);
	this->hit_ = origin.getHit();
	this->energy_ = origin.getEnergy();
	this->attack_ = origin.getAttack();
	this->name_ = origin.getName();
	return (*this);
}

Claptrap::~Claptrap(void)
{
	cout << "Destructor called" << endl;
}

void Claptrap::attack(const string& target)
{
	if (this->energy_ >= 1)
	{
		cout << "ClapTrap " << this->name_ << " attacks " <<  target << ", causing ";
		cout << this->attack_ << " points of damage!" << endl;
		this->energy_ -=  1;
	}
	else
		cout << "No energy points disponible, the attack failed!" << endl;
}

void Claptrap::takeDamage(unsigned int amount)
{
	if (this->hit_ >= 1)
	{
		cout << "ClapTrap " << this->name_ << " takes " <<  amount << " damages!"<< endl;
		this->hit_ -= amount;
		if (this->hit_ <= 0)
			cout << "Claptrap " << this->name_ << " died!"<<endl;
		
	}
	else
		cout << "Claptrap, is already dead!" << endl;
}

void Claptrap::beRepaired(unsigned int amount)
{
	if (this->hit_>= 10)
	{
			cout << "The health is maxed no need to be healed!"<<endl;
	}
	else if (this->energy_ >= 1)
	{
		cout << "ClapTrap " << this->name_ << " was repaired and regained ";
		if (amount + this->hit_ > 10)
			cout << 10 - this->hit_;
		else
			cout << amount;
		cout  <<  " Hit points." << endl;
		this->energy_ -=  1;
		this->hit_ += 1;
	}
	else
		cout << "No energy points disponible, the healing failed!" << endl;
}