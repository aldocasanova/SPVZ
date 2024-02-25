#pragma once
#include <iostream>
#include <string>

using namespace std;

class Soles
{
private:
	int TiempoAparicion, TiempoDesaparicion;
	int Disenio;
	int AcumuladorSoles;
public:
	int ValorSol;
	int AgarrarSoles;
	void mostrarSol(int TiempoAparicion, int tiempoDesaparicion, int ValorSol, int AgarrarSoles);
	void acumularSoles(int AcumuladorSoles);
};

