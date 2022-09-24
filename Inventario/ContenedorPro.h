#include "NodoProducto.h"

#if !defined(_CONTENEDORPRO_H)
#define _CONTENEDORPRO_H
class ContenedorPro{
private:
	NodoProducto* cabeza;
	NodoProducto* fin;
public:
	ContenedorPro();//constructor de la clase
	~ContenedorPro();//destructor de la clase
	void agregar(NodoProducto* nuevo);//resive como parametro nuevo para agregar a un nodo	
	bool vacia();//comprueva si esta en NULL
	void guarda();//gaurda
	void recuperarPro();//recupera lo guardado
	void verProductos();//recorre los nodo y muestra la informacion dentro de cada uno
};



#endif
