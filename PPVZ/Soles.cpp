#include "Soles.h"
#include <iostream>
#include <string>

using namespace std;

void Soles::mostrarSol(int TiempoAparicion, int tiempoDesaparicion, int ValorSol, int AgarrarSoles)
{
	ValorSol = 25;
	tiempoDesaparicion = 30;
	cout << "El sol tiene las siguientes características: " << ValorSol << " es el valor del sol, " << TiempoDesaparicion << "Es el tiempo de desaparicion" << endl;
}

void Soles::acumularSoles(int AcumuladorSoles)
{
	int Deposito=0;
	for (int i = 0; i <=200; i++)
	{
		Deposito = Deposito + ValorSol;
	}
}
