#include "pch.h"
#include "Desert_Eagle_PIstol.h"


Desert_Eagle_PIstol::Desert_Eagle_PIstol()
{
}

bool Desert_Eagle_PIstol::Shoot()
{	
	if (Hot >= 70 || Ammo <= 0)
	{
		return false;
	}
	Ammo--;
	Hot=Hot + 20;
	return true;

}


Desert_Eagle_PIstol::~Desert_Eagle_PIstol()
{
}
