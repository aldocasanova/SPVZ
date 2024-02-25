#pragma once
#include <iostream>
#include <string>

using namespace std;

class Podadora
{
private:
	int posicionX, posicionY;
	int danio;
public:
	bool Apagado;
	bool Encendido;
	void activarPodadora(int posicionX, int posicionY);
	void matarZombis(int danio);
};

