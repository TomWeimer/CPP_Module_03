#include "Scavtrap.hpp"

Scavtrap::Scavtrap(std::string newName)
{
	
	cout << "Scavtrap Constructor called" << endl;
	this->name_ = newName;
	this->hit_ = 100;
	this->energy_ = 50;
	this->attack_ = 20;

}

Scavtrap::Scavtrap(const Scavtrap& origin)
{
	cout << "Copy constructor called" << endl;
	this->hit_ = origin.getHit();
	this->energy_ = origin.getEnergy();
	this->attack_ = origin.getAttack();
	this->name_ = origin.getName();
}

Scavtrap& Scavtrap::operator=(const Scavtrap& origin)
{
	if (this == &origin)
		return (*this);
	this->hit_ = origin.getHit();
	this->energy_ = origin.getEnergy();
	this->attack_ = origin.getAttack();
	this->name_ = origin.getName();
	return (*this);
}
void Scavtrap::guardGate()
{
	cout << "Scavtrap " << this->name_ << " guards the gates!" << endl;
}

Scavtrap::~Scavtrap(void)
{
	cout << "Destructor SCav called" << endl;
}
