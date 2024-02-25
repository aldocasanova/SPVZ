#pragma once
#include <iostream>
#include <string>

using namespace std;

class Zombis
{
private:
	string colorPielZombi;
public:
	int vida;
	int mordida;
	int velocidad;
	int danioRecibido;
	int movimientoX;
	int movimientoY;

	void moverZombi(int movimientoX, int movimientoY, int danioRecibido);
	void mostrarZombi(string colorPielZombi, int vida, int mordida, int velocidad);
};

