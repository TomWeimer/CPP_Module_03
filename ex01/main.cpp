#include "Claptrap.hpp"
#include "Scavtrap.hpp"
using namespace std;
int main(void)
{
	Claptrap	claptrap("The chose One");
	Scavtrap 	truc("truc");

	truc.takeDamage(2);
	claptrap.attack("Target");
	claptrap.takeDamage(2);
	claptrap.beRepaired(3);
}