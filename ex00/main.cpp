#include "Claptrap.hpp"
using namespace std;
int main(void)
{
	Claptrap	claptrap("The chose One");
	

	claptrap.attack("Target");
	claptrap.takeDamage(2);
	claptrap.beRepaired(3);
}