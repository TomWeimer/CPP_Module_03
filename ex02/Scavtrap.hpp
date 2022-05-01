#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include "Claptrap.hpp"

class Scavtrap : public Claptrap
{
	public:
	Scavtrap& operator=(const Scavtrap& origin);
	Scavtrap(std::string newName);
	Scavtrap(const Scavtrap& origin);
	void guardGate();
	~Scavtrap();

};

#endif