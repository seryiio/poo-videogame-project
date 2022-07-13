#pragma once
class CJuegoNivel3
{
private:
	int CantidadEnemigos;
	vector<CEnemigo*>ArrEnemigos;
	CJugador*Jugador1 = new CJugador(1);
	int vidaj;
	int ptjacum;
	int tiempo, retrasador;
public:
	CJuegoNivel3();
	~CJuegoNivel3();
	void DibujaEnemigos(Graphics^g);
	void MoverEnemigos();
	void DibujaJugador(Graphics^g);
	void MoverJugador(Graphics^g, char tecla);
	void GenerarBalas();
	void DibujarBalas(Graphics^g);
	void MoverBalas(Graphics^g);
	void EliminarBalas(Graphics^g);
	void MuereEnemigo();
	void MuereJugador();
	

	int acumularpuntaje1();
	void setvida(int pvida);
	int getvida();


	int gettiempo();
	void settiempo(int pseg, int ret);

};

