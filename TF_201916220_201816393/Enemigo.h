#pragma once
public class CEnemigo
{
protected:
	int x, y;
	int dx, dy;
	int indx, indy;
	int indbdx;
	int indbdy;
	int bdxE, bdyE;
	vector <CBala*> ArrBalasEnemigo;
	int w, h;

public:
	CEnemigo(int _x, int _y);
	virtual void DibujarEnemigo(Graphics^g) {};
	void MoverEnemigo();
	Rectangle GetRectangulo();
	void AgregarBalasE();
	void MostrarBalasE(Graphics^g);
	void MoverBalasE(Graphics^g);
	void EliminarBalaE(Graphics^g);

	Rectangle GetRectanguloBalaE(int i);
	int  CantidadBalasEnemigo();
	~CEnemigo();
};
