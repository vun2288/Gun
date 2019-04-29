#pragma once
class K2_Rifle
{
public:
	K2_Rifle();
	~K2_Rifle() = default;

	bool Shoot();


private:
	int Ammo = 30;
	int Hot = 0;
	int Damege = 20;
	int Reaction = 30;
	int Speed = 30;
};

