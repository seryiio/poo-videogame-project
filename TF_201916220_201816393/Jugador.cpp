#include "LibreriaGeneral.h"



CJugador::CJugador(int _N)
{
	x = 450;
	y = 600;
	dx = 10;
	dy = 10;
	ancho = 50; alto = 50;
	bdx = 1;
	bdy = 1;
	indbdx = 0;
	indbdy = 0;
	mato = 0;
	N = _N;
	Bitmap ^img = gcnew Bitmap("soldier2.png");
	w = img->Width / 3;
	h = img->Height / 4;
	indx = 0; indy = 0;
	delete img;
}

CJugador::~CJugador()
{
}
void CJugador::DibujarJugador(Graphics^g)
{	

	Bitmap ^img = gcnew Bitmap("soldier2.png");
	img->MakeTransparent(img->GetPixel(1, 1));
	Rectangle porcion = Rectangle(w*indx, h*indy, w, h);
	g->DrawImage(img, x, y, porcion, GraphicsUnit::Pixel);


	delete img;

}
void CJugador::MoverJugador(Graphics^g, char tecla)
{
	int maxalto = (int)g->ClipBounds.Height;
	int maxancho = (int)g->ClipBounds.Width;

	if (tecla == 'A' || tecla == 'a')
	{
		if (x - dx > 0)
		{
			x = x - dx;
			bdx = -20;
			bdy = 0;
			indy = 1;
			indbdx = 0;
			indbdy = 2;

			if (indx >= 0 && indx < 2)
			{
				indx++;
				x--;
			}
			else
				indx = 0;
		}
	}
	if (tecla == 'W' || tecla == 'w')
	{
		if (y - dy > 0)
		{
			y = y - dy;
			bdx = 0;	
			bdy = -20;
			indy = 3;
			indbdx = 0;
			indbdy = 1;
			if (indx >= 0 && indx < 2)
			{
				indx++;
				y--;
			}
			else
				indx = 0;
		}
	}
	if (tecla == 'S' || tecla == 's')
	{
		if (y + dy + alto < 700)
		{
			y = y + dy;
			bdx = 0;
			bdy = 20;
			indy = 0;
			indbdx = 0;
			indbdy = 3;
			if (indx >= 0 && indx < 2)
			{
				indx++;
				y++;
			}
			else
				indx = 0;

		}
	}
	if (tecla == 'D' || tecla == 'd')
	{
		if (x + dx + ancho < 950)
		{
			x = x + dx;
			bdx = 20;
			bdy = 0;
			indy = 2;
			indbdx = 0;
			indbdy = 0;
			if (indx >= 0 && indx < 2)
			{
				indx++;
				x++;
			}
			else
				indx = 0;
		}
	}

}
void CJugador::AgregarBalas()
{
	if (ArrBalas.size() <= 1) {
		if (N == 1) { ArrBalas.push_back(new CBalaCriminal(x + ancho / 2, y + alto / 2, bdx, bdy, indbdx, indbdy)); };
		if (N == 2) { ArrBalas.push_back(new CBalaCorrupto(x + ancho / 2, y + alto / 2, bdx, bdy, indbdx, indbdy)); };
	}
}
Rectangle CJugador::GetRectangulo()
{
	return Rectangle(x, y, ancho, alto);
}
void CJugador::MostrarBalas(Graphics^g)
{
	for (int i = 0; i < ArrBalas.size(); i++)
	{
		ArrBalas[i]->Dibujar(g);
	}
}
void CJugador::MoverBalas(Graphics^g)
{
	for (int i = 0; i < ArrBalas.size(); i++)
	{
		ArrBalas[i]->Mover(g);
	}
}

void CJugador::EliminarBala(Graphics^g)
{
	int pos = -1;
	if (ArrBalas.size() > 0) {
		for (int i = 0; i < ArrBalas.size() && pos == -1; i++)
		{
			if (ArrBalas[i]->ChocoLimite() == 1 || mato == 1)
			{
				mato = 0;
				pos = i;
				
				ArrBalas.erase(ArrBalas.begin() + pos);
			}
			
		}

	}
}
int CJugador::CantidadBalas()
{
	return ArrBalas.size();
}
Rectangle CJugador::GetRectangulodeBala(int i)
{
	return ArrBalas[i]->GetRectangulo();
}
void CJugador::MuereBala(int X)
{
	mato = 1;
}
int  CJugador::GetX() 
{
	return x;
}
void  CJugador::SetX(int _x)
{
	x = _x;
}
int  CJugador::GetY()
{
	return y;
}
void  CJugador::SetY(int _y)
{
	y = _y;
}
void  CJugador::SetXY(int _x,int _y)
{
	x = _x;
	y = _y;
}