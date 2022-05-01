#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>
using namespace std;

class Claptrap
{
	protected:
	string	name_;
	int		hit_;
	int		energy_;
	int		attack_;


	public:
	void attack(const string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getAttack(void)const;
	int getHit(void)const;
	int getEnergy(void)const;
	string getName(void)const;

	// operator:
	Claptrap& operator=(const Claptrap& origin);
	//	constructor
	Claptrap();
	Claptrap(string newName);
	Claptrap(const Claptrap& origin);
	//	destructor
	~Claptrap();

};
# endif