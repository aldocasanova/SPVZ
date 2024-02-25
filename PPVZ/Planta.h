#pragma once
#include <iostream>

using namespace std;

class Planta
{
private:
	int ubicacionX;
	int ubicacionY;
public:
	int danio;
	int vida;
	void mostrarPlanta(int danio, int vida);
	void mostrarUbicacionPlanta(int ubicacionX, int UbicacionY);
};

