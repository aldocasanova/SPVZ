#include "Zombis.h"
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void Zombis::moverZombi(int movimientoX, int movimientoY, int danioRecibido)
{
	srand(time(NULL));
		movimientoY = rand() % (5 - 1 + 1) + 1;
	for (int i = 0; i <=9; i++)
	{
		movimientoX = i;
		cout << "El zombi está ubicado en: " << movimientoX << endl; //Es una referencia para saber donde está ubicado el zombi

	}

}

void Zombis::mostrarZombi(string colorPielZombi, int vida, int mordida, int velocidad)
{
	cout << "El zombi es: " << colorPielZombi << " ,tiene " << vida << " de salud " << " , " << mordida << " de danio y " << velocidad << " de velocidad." << endl;
}
