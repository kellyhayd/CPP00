#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie{
private:
		std::string	name;

public:
	Zombie(std::string name);
	~Zombie();

	void	announce();

	std::string	getName();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif