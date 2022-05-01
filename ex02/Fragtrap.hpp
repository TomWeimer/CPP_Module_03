#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include "Claptrap.hpp"

class Fragtrap : public Claptrap
{
	public:
	Fragtrap& operator=(const Fragtrap& origin);
	Fragtrap(std::string newName);
	Fragtrap(const Fragtrap& origin);
	Fragtrap();
	~Fragtrap();
};
#endif