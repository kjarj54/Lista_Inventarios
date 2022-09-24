#include "ContenedorCl.h"
#include "ContenedorInven.h"

#if !defined(_FACTURAS_H)
#define _FACTURAS_H

class Facturas{
private:
	Nodo* cabeza;
	Nodo* fin;
	NodoProducto* cab;
	NodoProducto* end;
public:	
	Facturas();
	void venta();
	void guardarFac();
	void recuperarFac();
};


#endif

