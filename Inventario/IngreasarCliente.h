#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include <cstdio>
#include <conio.h>
#include <string.h>
#include "UI.h"
using namespace std;
#define TAM_ATR 25
#if !defined(_INGRESARCLIENTE_H)
#define _INGRESARCLIENTE_H
class ingresarCliente{
private:
	char cedula[TAM_ATR];
	char nombre[TAM_ATR];
	char direccion[TAM_ATR];
public:	
	ingresarCliente();//constructor de la clase
	void setCedula(string cedula);//recibe como parametro la cedula
	string getCedula();//retorna a cedula
	void setNombre(string nombre);//recibe como parametro el nombre
	string getNombre();//retorna a nombre
	void setDireccion(string direccion);//recibe como parametro la direccion
	string getDireccion();//retorna a direccion
};

#endif





