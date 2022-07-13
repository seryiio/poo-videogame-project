#include "LibreriaGeneral.h"



CJuegoNivel1::CJuegoNivel1()
{
	puntaje = 0;
	Random X;
	CantidadEnemigos = X.Next(10, 20);

	for (int i = 0; i < CantidadEnemigos; i++)
	{
			

		ArrEnemigos.push_back(new CEnemigoAlfa(X.Next(0, 800), X.Next(0, 550)));

	}
}


CJuegoNivel1::~CJuegoNivel1()
{
}

void CJuegoNivel1::DibujaEnemigos(Graphics^g)
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->DibujarEnemigo(g);
	}
}
void CJuegoNivel1::MoverEnemigos()
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->MoverEnemigo();
	}
}
void CJuegoNivel1::DibujaJugador(Graphics^g)
{
	Jugador1->DibujarJugador(g);
}
void CJuegoNivel1::MoverJugador(Graphics^g, char tecla)
{
	Jugador1->MoverJugador(g, tecla);
}
void CJuegoNivel1::EliminarBalas(Graphics^g)
{
	Jugador1->EliminarBala(g);
}
void CJuegoNivel1::GenerarBalas()
{
	Jugador1->AgregarBalas();
}
void CJuegoNivel1::MoverBalas(Graphics^g)
{
	Jugador1->MoverBalas(g);
}
void CJuegoNivel1::DibujarBalas(Graphics^g)
{
	Jugador1->MostrarBalas(g);
}


void CJuegoNivel1::MuereEnemigo()
{
	int pos = -1;
	int mato = 0;
	if (ArrEnemigos.size() > 0)
	{
		for (int i = 0; i < ArrEnemigos.size() && pos == -1 && mato == 0; i++)
		{
			for (int j = 0; j <Jugador1->CantidadBalas(); j++)
			{
				
					Rectangle AreaI = ArrEnemigos[i]->GetRectangulo();
					Rectangle AreaJ = Jugador1->GetRectangulodeBala(j);
					if (AreaI.IntersectsWith(AreaJ))
					{
						mato = 1;
						Jugador1->MuereBala(mato);
						pos = i;
						puntaje += 10;
						break;
					}
				

			}
			if (pos != -1) {
				break;
			}
		}
		if (pos != -1) {
			ArrEnemigos.erase(ArrEnemigos.begin() + pos);
		}
	}
}
int CJuegoNivel1::acumularpuntaje1()
{
	return puntaje;
}

void CJuegoNivel1::settiempo(int pseg, int ret)
{
	tiempo = pseg;
	retrasador = ret;
}

int CJuegoNivel1::gettiempo()
{
	if (tiempo > 0)
	{
		retrasador++;
		if (retrasador == 25)
		{
			tiempo--;
			retrasador = 0;
		}

	}
	return tiempo;
}


void CJuegoNivel1::setvida(int pvida)
{
	vidaj = pvida;
}


int CJuegoNivel1::getvida()
{
	return vidaj;
}
//FALTA GENERAR BAlAS

void CJuegoNivel1::GenerarBalasE()
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->AgregarBalasE();
	}
}
void CJuegoNivel1::DibujarBalasE(Graphics^g)
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->MostrarBalasE(g);
	}
}
void CJuegoNivel1::MoverBalasE(Graphics^g)
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->MoverBalasE(g);
	}
}

void CJuegoNivel1::EliminarBalasE(Graphics^g)
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->EliminarBalaE(g);
	}
}
void CJuegoNivel1::MuereJugador()
{
	SoundPlayer ^player = gcnew SoundPlayer();
	if (ArrEnemigos.size() > 0)
	{
		for (int i = 0; i < ArrEnemigos.size(); i++)
		{
			for (int j = 0; j < ArrEnemigos[i]->CantidadBalasEnemigo(); j++)
			{
				Rectangle AreaI = ArrEnemigos[i]->GetRectanguloBalaE(j);
				Rectangle AreaJ = Jugador1->GetRectangulo();
				if (AreaI.IntersectsWith(AreaJ))
				{	Jugador1->SetXY(450, 600);
					player->SoundLocation = "oof.wav";
					player->Load();
					player->Play();
				
					vidaj--;
					delete player;
				}

			}
		}
		
	}
}