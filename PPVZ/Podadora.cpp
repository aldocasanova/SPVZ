#include "Podadora.h"

void Podadora::activarPodadora(int posicionX, int posicionY)
{
	//Aqui sera cuando el zombi interactua con la podadora, en esta caso se va a imprimir la posicion donde el zombi active la podadora
	
	cout << "En la posicion: " << posicionX << " y " << posicionY << " se activará la podadora." << endl;
}

void Podadora::matarZombis(int danio)
{
	danio = 10000000;

	//Se puso un numero muy grande para garantizar que todo zombi dependiendo de la vida morirá instantáneamente
}
