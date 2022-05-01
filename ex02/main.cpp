#include "Claptrap.hpp"
#include "Scavtrap.hpp"
#include "Fragtrap.hpp"
using namespace std;
int main(void)
{
	Claptrap	claptrap("The chose One");
	Scavtrap 	truc("truc");
	Fragtrap	lol("machin");

	truc.takeDamage(2);
	claptrap.attack("Target");
	claptrap.takeDamage(2);
	claptrap.beRepaired(3);
}