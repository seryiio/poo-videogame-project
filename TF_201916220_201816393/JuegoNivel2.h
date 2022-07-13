#pragma once
class CJuegoNivel2
{
private:
	int CantidadEnemigos;
	vector<CEnemigo*>ArrEnemigos;
	CJugador*Jugador1 = new CJugador(2);
	int vidaj;
	int ptjacum;
	int tiempo, retrasador;
public:
	CJuegoNivel2();
	~CJuegoNivel2();
	void DibujaEnemigos(Graphics^g);
	void MoverEnemigos();
	void DibujaJugador(Graphics^g);
	void MoverJugador(Graphics^g, char tecla);
	void GenerarBalas();
	void DibujarBalas(Graphics^g);
	void MoverBalas(Graphics^g);
	void EliminarBalas(Graphics^g);
	void MuereEnemigo();


	int acumularpuntaje1();
	void setvida(int pvida);
	int getvida();
	int gettiempo();
	void settiempo(int pseg, int ret);

	void MuereJugador();
};

