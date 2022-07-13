#pragma once
class CBala
{
protected:
	int x, y;
	int dx, dy;
	int indx, indy;
	int w, h;

public:
	CBala(int _x, int _y, int _dx, int _dy, int _indx, int _indy);
	virtual void Dibujar(Graphics^g) {};
	void Mover(Graphics^g);
	int GetDX();
	int GetDY();
	void SetDX(int pdx);
	void SetDY(int pdy);
	int ChocoLimite();
	Rectangle GetRectangulo();


	~CBala();
};
