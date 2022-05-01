#include "Fragtrap.hpp"

Fragtrap::Fragtrap(std::string newName) : Claptrap(newName)
{
	
	cout << "Fragtrap Constructor called" << endl;
	this->name_ = newName;
	this->hit_ = 100;
	this->energy_ = 50;
	this->attack_ = 20;

}

Fragtrap::Fragtrap(const Fragtrap& origin) : Claptrap()
{
	cout << "Copy constructor called" << endl;
	this->hit_ = origin.getHit();
	this->energy_ = origin.getEnergy();
	this->attack_ = origin.getAttack();
	this->name_ = origin.getName();
}

Fragtrap& Fragtrap::operator=(const Fragtrap& origin)
{
	if (this == &origin)
		return (*this);
	this->hit_ = origin.getHit();
	this->energy_ = origin.getEnergy();
	this->attack_ = origin.getAttack();
	this->name_ = origin.getName();
	return (*this);
}

Fragtrap::Fragtrap(void) : Claptrap()
{
	this->hit_ = 100;
	this->energy_ = 100;
	this->attack_ = 30;
	this->name_ = "Default";
	std::cout << "Default  Fragtrap constructor called" << std::endl;
}
Fragtrap::~Fragtrap(void)
{
	cout << "Destructor Frag called" << endl;
}