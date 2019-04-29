#pragma once
class Desert_Eagle_PIstol
{
public:
	Desert_Eagle_PIstol();
	~Desert_Eagle_PIstol() = default;

	bool Shoot();
private:
	int Ammo = 6;
	int Hot = 0;
	int Reaction = 0;
	int unSpeed = 10;
};

