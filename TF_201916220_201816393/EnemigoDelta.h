#pragma once
class CEnemigoDelta : public CEnemigo
{
public:
	CEnemigoDelta(int _x, int _y);
	~CEnemigoDelta();
	void DibujarEnemigo(Graphics^g);
};
