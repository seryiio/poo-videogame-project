#include "LibreriaGeneral.h"



CJuegoNivel3::CJuegoNivel3()
{
	ptjacum = 0;
	Random X;
	CantidadEnemigos = X.Next(5, 10);
	
	for (int i = 0; i < CantidadEnemigos; i++)
	{


		ArrEnemigos.push_back(new CEnemigoGamma(X.Next(0, 800), X.Next(10, 600)));

	}
	
}


CJuegoNivel3::~CJuegoNivel3()
{
}

void CJuegoNivel3::DibujaEnemigos(Graphics^g)
{
	for (int i = 0; i < ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->DibujarEnemigo(g);
	}
}
void CJuegoNivel3::MoverEnemigos()
{
	for (int i = 0; i <ArrEnemigos.size(); i++)
	{
		ArrEnemigos[i]->MoverEnemigo();
	}
}
void CJuegoNivel3::DibujaJugador(Graphics^g)
{
	Jugador1->DibujarJugador(g);
}
void CJuegoNivel3::MoverJugador(Graphics^g, char tecla)
{
	Jugador1->MoverJugador(g, tecla);
}
void CJuegoNivel3::EliminarBalas(Graphics^g)
{
	Jugador1->EliminarBala(g);
}
void CJuegoNivel3::GenerarBalas()
{
	Jugador1->AgregarBalas();
}
void CJuegoNivel3::MoverBalas(Graphics^g)
{
	Jugador1->MoverBalas(g);
}
void CJuegoNivel3::DibujarBalas(Graphics^g)
{
	Jugador1->MostrarBalas(g);
}
void CJuegoNivel3::MuereEnemigo()
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
					ptjacum += 10;
					break;
				}

			}
			if (pos != -1) {
				break;
			}
		}
		if (pos != -1)
		{
			ArrEnemigos.erase(ArrEnemigos.begin() + pos);
		}
	}
}

void CJuegoNivel3::setvida(int pvida)
{
	vidaj = pvida;
}

void CJuegoNivel3::MuereJugador()
{

	SoundPlayer ^player = gcnew SoundPlayer();
	if (ArrEnemigos.size() > 0)
	{
		for (int i = 0; i < ArrEnemigos.size(); i++)
		{

			Rectangle AreaI = ArrEnemigos[i]->GetRectangulo();
			Rectangle AreaJ = Jugador1->GetRectangulo();
			if (AreaI.IntersectsWith(AreaJ))
			{

				player->SoundLocation = "oof.wav";
				player->Load();
				player->Play();
				Jugador1->SetXY(400,450);
				vidaj--;

				delete player;
			}
			
		}
	}

}


int CJuegoNivel3::getvida()
{
	return vidaj;
}


void CJuegoNivel3::settiempo(int pseg, int ret)
{
	tiempo = pseg;
	retrasador = ret;
}

int CJuegoNivel3::gettiempo()
{
	if (tiempo > 0)
	{
		retrasador++;
		if (retrasador == 15)
		{
			tiempo--;
			retrasador = 0;
		}

	}
	return tiempo;
}



int CJuegoNivel3::acumularpuntaje1()
{
	return ptjacum;
}
