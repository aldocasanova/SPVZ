#include "Planta.h"
#include <iostream>
#include <string>

using namespace std;

void Planta::mostrarPlanta(int danio, int vida)
{
	//El danio se basar� segun los golpes que reciba el zombi por parte de la planta
	//La vida ser� contada segun cuantas mordidas va a aguantar

	cout << "La planta har�: " << danio << " y tiene: " << vida<<" de salud."<<endl;
}

void Planta::mostrarUbicacionPlanta(int ubicacionX, int UbicacionY)
{
	cout << "est� ubicada en: 0" << ubicacionX << " y en: " << UbicacionY;
}
