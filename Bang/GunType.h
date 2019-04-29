#pragma once
class GunType
{
public:
	GunType();
	~GunType();
	
	void Desert_Eagle();
	void K2_Rifle();

	bool Shoot();
	bool Cool();
	bool Reload();
	void Select();


private:
	int Ammo;
	int Hot;
	int Hot_MAX;
	int Ammo_MAX;
};

