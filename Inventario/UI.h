
#include <iostream>
using namespace std;

#if !defined(_UI_H)
#define _UI_H

class UI //Interface de Usiario (User Interface)
{
	private:
	public:
		UI();
		void ubicarCursor(int x, int y);//coloca el cursor en un lugar de la pantalla de consola dado (x,y) 
		void leecad(char *cad,int tam);//lee una cadena de caracteres limitando el tamaño de lo leído para no desbordar el buffer
		void limpiar();
		void txtColor(int ForgC, int BackC);
};

#endif

/*
Black        |   0
Blue         |   1
Green        |   2
Cyan         |   3
Red          |   4
Magenta      |   5
Brown        |   6
Light Gray   |   7
Dark Gray    |   8
Light Blue   |   9
Light Green  |   10
Light Cyan   |   11
Light Red    |   12
Light Magenta|   13
Yellow       |   14
White        |   15
*/
