#include "LibreriaGeneral.h"



CBalaCriminal::CBalaCriminal(int _x, int _y, int _dx, int _dy, int _indx, int _indy) :CBala(x, y, dx, dy, indx, indy)
{
	x = _x;
	y = _y;
	dx = _dx;
	dy = _dy;
	indx = _indx;
	indy = _indy;
	Bitmap ^balaJ = gcnew Bitmap("bullet.png");
	w = balaJ->Width / 4;
	h = balaJ->Height / 4;
	delete balaJ;
}


CBalaCriminal::~CBalaCriminal()
{
}
void CBalaCriminal::Dibujar(Graphics^g)
{

	Bitmap ^balaJ = gcnew Bitmap("bullet.png");
	balaJ->MakeTransparent(balaJ->GetPixel(1, 1));
	Rectangle porcion = Rectangle(w*indx, h*indy, h, w);
	g->DrawImage(balaJ, x, y, porcion, GraphicsUnit::Pixel);
	indx++;
	if (indx >= 4)
	{
		indx = 0;
	}
	delete balaJ;

}