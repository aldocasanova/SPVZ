#pragma once
#include <iostream>
#include <string>

using namespace std;

class Escenario
{
private:
	int ancho, alto;
	string colorEscenario;
	string tipoEscenario;
	int TiempoCaidaSoles;

public:
	string escenario;
	int colocacionX, colocacionY;
	void mostrarEscenario(string tipoEscenario);
	void plantarPlanta(int colocacionX, int colocacionY);
};

