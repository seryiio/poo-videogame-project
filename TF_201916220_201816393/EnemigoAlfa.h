#pragma once
class CEnemigoAlfa : public CEnemigo
{
public:

	CEnemigoAlfa(int _x, int _y);
	~CEnemigoAlfa();
	void DibujarEnemigo(Graphics^g);
};
