#pragma once
class CEnemigoGamma : public CEnemigo
{
public:
	CEnemigoGamma(int _x, int _y);
	~CEnemigoGamma();
	void DibujarEnemigo(Graphics^g);
};