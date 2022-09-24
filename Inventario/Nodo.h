#include "IngreasarCliente.h"

#if !defined(_NODO_H)
#define _NODO_H

class Nodo{
private:
	Nodo* sig;//puntero a si mismo
	Nodo* ant;//puntero a si mismo
	ingresarCliente* info;//puntero a la informacion de la clase ingresarCliente
public:	
	Nodo(ingresarCliente* nuevo);//constructor de la clase
	~Nodo();//destructor del nodo
	void setSig(Nodo* sig);//metodo de recorrer el nodo
	void setAnt(Nodo* ant);//metodo de recorrer el nodo
	ingresarCliente* getInfo();//metodo que regresa la informacion de la clase ingresarCliente a info
	Nodo* getSig();//retorna a sig
	Nodo* getAnt();//retorna a ant
	
};

#endif
