#include "Inventario.h"

#if !defined(_NODOINVENTARIO_H)
#define _NODOINVENTARIO_H
class NodoInventario{
private:
	NodoInventario* sig;//puntero a si mismo
	NodoInventario* ant;//puntero a si mismo
	Inventario* infoInve;//puntero a la informacion de la clase ingresarCliente
public:	
	NodoInventario(Inventario* nuevo);//constructor de la clase
	~NodoInventario();//destructor del nodo
	void setSig(NodoInventario* sig);//metodo de recorrer el nodo
	void setAnt(NodoInventario* ant);//metodo de recorrer el nodo
	Inventario* getInfoInve();//metodo que regresa la informacion de la clase ingresarCliente a info
	NodoInventario* getSig();//retorna a sig
	NodoInventario* getAnt();//retorna a ant	
	
	
};




#endif

