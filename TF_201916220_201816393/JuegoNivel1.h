#pragma once
class CJuegoNivel1
{
private:
	int CantidadEnemigos;
	vector<CEnemigo*>ArrEnemigos;
	CJugador*Jugador1 = new CJugador(1);
	int puntaje;
	int vidaj;
	int tiempo, retrasador;
public:
	CJuegoNivel1();
	~CJuegoNivel1();
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

	void GenerarBalasE();
	void DibujarBalasE(Graphics^g);
	void MoverBalasE(Graphics^g);
	void EliminarBalasE(Graphics^g);
	void MuereJugador();
};
