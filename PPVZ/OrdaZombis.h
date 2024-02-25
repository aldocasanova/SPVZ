#pragma once
#include <iostream>
#include <string>

using namespace std;

class OrdaZombis
{
private:
	int TiempoAparicion;
	string Tipo_Zombis;
	int Numero_Zombis;
	int Numero_Zombis_Especiales;
	int UbicacionX;
	int UbicacionY;
public:
	void mostrarOrda(int TiempoAparacion, string Tipo_Zombis, int Numero_Zombis, int Numero_Zombis_Especiales, int UbicacionX, int UbicacionY);
};

