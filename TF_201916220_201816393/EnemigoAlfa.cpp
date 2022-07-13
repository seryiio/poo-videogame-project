#include "LibreriaGeneral.h"



CEnemigoAlfa::CEnemigoAlfa(int _x, int _y) :CEnemigo(_x, _y)
{
	dx = 0;
	dy = 10;
	Bitmap ^img = gcnew Bitmap("EnemigoAlfa.jpg");
	w = img->Width / 4;
	h = img->Height / 4;
	delete img;

}


CEnemigoAlfa::~CEnemigoAlfa()
{
}
void CEnemigoAlfa::DibujarEnemigo(Graphics^g)
{
	Bitmap ^img = gcnew Bitmap("EnemigoAlfa.jpg");
	img->MakeTransparent(img->GetPixel(1, 1));
	Rectangle porcion = Rectangle(w*indx, h*indy, w, h);
	g->DrawImage(img, x, y, porcion, GraphicsUnit::Pixel);
	indx++;
	if (indx >= 4)
	{
		indx = 0;
	}
	if (dy < 0) { indy = 3; };
	if (dy > 0) { indy = 0; };
	delete img;
}