#include "pch.h"
#include "GunType.h"


GunType::GunType()
{
}

void GunType::Desert_Eagle()
{	
	Ammo = 6;
	Hot = 0;
	Hot_MAX = 30;
	Ammo_MAX = 6;

}

void GunType::K2_Rifle()
{
	Ammo = 30;
	Hot = 0;
	Hot_MAX = 150;
	Ammo_MAX = 30;

}

bool GunType::Shoot()
{
	if (Hot_MAX < Hot||Ammo<=0)
	{
		cout << "√—¿ª ΩÚ ºˆ æ¯Ω¿¥œ¥Ÿ." << endl;
		return false;
	}
	Ammo--;
	Hot+=5;
	return true;
}

bool GunType::Cool()
{
	if (Hot >= 0)
	{
		return false;
	}
	Hot--;
	return true;
}

bool GunType::Reload()
{
	if (Ammo >= Ammo_MAX)
	{
		cout << "≈∫¿Ã ≤À ¬¸" << endl;
		return false;
	}
	Ammo = Ammo_MAX;
	return true;
}

void GunType::Select()
{
	int a;
	puts("√—¿ª º±≈√«œººø‰");
	puts("1.µ•¿˙∆Æ ¿Ã±€             2.K2 º“√—");
	cin >> a;
	switch (a)
	{
	case 1 :
		Desert_Eagle();
		puts("µ•¿˙∆Æ ¿Ã±€");
		break;
	case 2 :
		K2_Rifle();
		puts("K2 º“√—");
		break;
	default:
		break;
	}
}



GunType::~GunType()
{
}
