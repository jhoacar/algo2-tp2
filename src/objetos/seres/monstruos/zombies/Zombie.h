#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "../Monstruo.h"

class Zombie : public Monstruo
{
	public:
		Zombie();
		Zombie(Coordenada posicion,char nombre);
		~Zombie();
	protected:
};

#endif
