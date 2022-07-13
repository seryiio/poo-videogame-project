#include "LibreriaGeneral.h"



CEnemigoGamma::CEnemigoGamma(int _x, int _y) :CEnemigo(_x, _y)
{
	Random X;
	int a = X.Next(0, 2);
	if (a = 1)
	{
		dx = -1 * X.Next(20, 35);
	}
	else dx = X.Next(10, 20);

	dy = 0;

	Bitmap ^img = gcnew Bitmap("Enemigo3O.png");
	w = img->Width / 4;
	h = img->Height / 4;
	delete img;


}


CEnemigoGamma::~CEnemigoGamma()
{
}
void CEnemigoGamma::DibujarEnemigo(Graphics^g)
{
	Bitmap ^img = gcnew Bitmap("Enemigo3O.png");
	img->MakeTransparent(img->GetPixel(1, 1));
	Rectangle porcion = Rectangle(w*indx, h*indy, w, h);
	g->DrawImage(img, x, y, porcion, GraphicsUnit::Pixel);
	indx++;
	if (indx >= 4)
	{
		indx = 0;
	}
	if (dy < 0) { indy = 3; }
	if (dy > 0) { indy = 0; }
	if (dx < 0) { indy = 1; }
	if (dx > 0) { indy = 2; }
	delete img;
}