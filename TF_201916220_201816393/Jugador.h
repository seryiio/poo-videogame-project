#pragma once
class CJugador
{
private:
	int x, y;
	int dx, dy;
	int indx, indy;
	int ancho, alto;
	char tecla;
	int bdx, bdy;
	int mato;
	int w, h;
	int indbdx;
	int indbdy;
	int N;
	vector <CBala*> ArrBalas;

public:
	CJugador(int N);
	void DibujarJugador(Graphics^g);
	void MoverJugador(Graphics^g, char tecla);
	Rectangle GetRectangulo();
	void AgregarBalas();
	void MostrarBalas(Graphics^g);
	void MoverBalas(Graphics^g);
	void EliminarBala(Graphics^g);
	int CantidadBalas();
	Rectangle GetRectangulodeBala(int i);
	void MuereBala(int X);

	int GetX();
	void SetX(int _x);
		
	int GetY();
	void SetY(int _y);
	void SetXY(int _x, int _y);

	~CJugador();
};
