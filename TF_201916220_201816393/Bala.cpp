#include "LibreriaGeneral.h"



CBala::CBala(int _x, int _y, int _dx, int _dy, int _indx, int _indy)
{

}


CBala::~CBala()
{
}

void CBala::Mover(Graphics^g)
{
	if (x + dx < 0 || x + dx + h>950) dx = 0;
	if (y + dy < 0 || y + dy + w>750) dy = 0;

	x = x + dx;
	y = y + dy;
}
int CBala::GetDX()
{
	return dx;
}
int CBala::GetDY()
{
	return dy;
}
void CBala::SetDX(int pdx)
{
	dx = pdx;
}
void CBala::SetDY(int pdy)
{
	dy = pdy;
}
int CBala::ChocoLimite()
{
	if (y + dy - h < 0||y + dy + h < 0 || y + dy + h>750 || x + dx + w < 0 || x + dx + w>950) { return 1; }
	else return 0;
}

Rectangle CBala::GetRectangulo()
{
	return Rectangle(x, y, w, h);
}

