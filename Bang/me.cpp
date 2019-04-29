#include "pch.h"
#include "me.h"
#include "GunType.h"

GunType Play;

me::me()
{
}


me::~me()
{
}

void me::GetChar()
{
	int b;
	cin >> b;
	switch (b)
	{
	case 'w':
	case'W':
		Play.Shoot();
		break;
	case 'r':
	case 'R':
		Play.Reload();
	case'e':
	case'E':
		Play.Cool();

	default:
		Play.Shoot();
		break;
	}

}

