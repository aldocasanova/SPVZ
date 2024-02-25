#pragma once
#include <iostream>
#include <string>

using namespace std;

class Semillas
{
private:
	int espacios;
	int TiempoRecarga;
	int precio;
public:
	string escoger;
	void Jugar(int espacios, int TiempoRecarga, int precio);
};

