#include "Escenario.h"
#include <iostream>

using namespace std;

void Escenario::mostrarEscenario(string tipoEscenario)
{
	cout << "El escenario es de: " << tipoEscenario;
}

void Escenario::plantarPlanta(int colocacionX, int colocacionY)
{
	cout << "Esta planta está colocada en: " << colocacionX << " y " << colocacionY;
}
