#include "ContenedorPro.h"
#if !defined(_INVENTARIO_H)
#define _INVENTARIO_H
class Inventario{
private:
	int cantidad;
	float precio;

public:	
	Inventario();//constructo de la clase
	void setPrecio(float precio);//resive como parametro el precio
	float getPrecio();//devuelve a precio
	void setCantidad(int cantidad);//resive como parametro la cantidad
	int getCantidad();//devuelve a cantidad
	
};




#endif
