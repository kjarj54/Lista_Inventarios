#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include <string.h>
using namespace std;

#if !defined(_INGRESARPRODUCTO_H)
#define _INGRESARPRODUCTO_H
#define TAM_P 25
class IngresarProducto{
private:
	char codigo[TAM_P];
	char nombre[TAM_P];
public:
	IngresarProducto();//constructor de la clase
	void setCodigo(string codigo);//resive como parametro el codigo
	string getCodigo();//devuelve a codigo como un char 
	void setNombre(string nombre);//resive como parametro el nombre
	string getNombre();//devuelve a nombre como un char 
};



#endif
