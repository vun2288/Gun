#include "pch.h"
#include "K2_Rifle.h"


K2_Rifle::K2_Rifle()
{
}

bool K2_Rifle::Shoot()
{
	if (Ammo <= 0 || Hot >= 50)
	{
		return false;
	}
	Hot++;
	return true;
}
