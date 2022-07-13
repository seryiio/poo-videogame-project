#include "LibreriaGeneral.h"



CEnemigo::CEnemigo(int _x, int _y)
{
	x = _x;
	y = _y;
	dx = 10;
	dy = 10;
	indy = 0;
	indx = 0;
	indbdx = 0;
	indbdy = 0;
	bdxE = 0;
	bdyE = 1;  

}

void CEnemigo::MoverEnemigo()
{
	if (x + dx < 0 || x + dx + w>900) { dx = dx * -1; }
	if (y + dy < 0 || y + dy + h>700) { dy = dy * -1; }
	if (dy < 0) { bdxE = 0; bdyE = -30;	indbdx = 0; indbdy = 1; }//DIRECCIONES DE LA BALA
	if (dy > 0) { bdxE = 0; bdyE = 30; indbdx = 0; indbdy = 3; }

	x = x + dx;
	y = y + dy;
}
void CEnemigo::AgregarBalasE()
{
	ArrBalasEnemigo.push_back(new CBalaCriminal(x + w / 2, y + h / 2, bdxE, bdyE, indbdx, indbdy));
}
void CEnemigo::MostrarBalasE(Graphics^g)
{
	for (int i = 0; i < ArrBalasEnemigo.size(); i++)
	{
		ArrBalasEnemigo[i]->Dibujar(g);
	}
}
void CEnemigo::MoverBalasE(Graphics^g)
{
	for (int i = 0; i < ArrBalasEnemigo.size(); i++)
	{
		ArrBalasEnemigo[i]->Mover(g);
	}
}
void CEnemigo::EliminarBalaE(Graphics^g)
{
	int pos = -1;
	if (ArrBalasEnemigo.size() > 0) {
		for (int i = 0; i < ArrBalasEnemigo.size() && pos == -1; i++)
		{
			if (ArrBalasEnemigo[i]->ChocoLimite() == 1)
			{

				pos = i;

				ArrBalasEnemigo.erase(ArrBalasEnemigo.begin() + pos);
			}

		}

	}
}
Rectangle CEnemigo::GetRectanguloBalaE(int i)
{
	return ArrBalasEnemigo[i]->GetRectangulo();
}
int CEnemigo::CantidadBalasEnemigo()
{
	return ArrBalasEnemigo.size();
}
CEnemigo::~CEnemigo()
{
}
Rectangle CEnemigo::GetRectangulo()
{
	return Rectangle(x, y, w, h);
}