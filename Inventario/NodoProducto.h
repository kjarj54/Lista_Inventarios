#include "Producto.h"

#if !defined(_NODOPRODUCTO_H)
#define _NODOPRODUCTO_H

class NodoProducto{
private:
	IngresarProducto* infoPro;//puntero a la clase
	NodoProducto* sig;//puntero a si mismo
	NodoProducto* ant;//puntero a si mismo
public:
	NodoProducto(IngresarProducto* nuevo);//contructor de la clase que resive como parametro la informacion de la clase IngresarProducto
	~NodoProducto();//destructor
	void setSig(NodoProducto* sig);//resive como parametro sig que es un nodo a si mismo
	NodoProducto* getSig();//devuelve a sig
	void setAnt(NodoProducto* ant);//resive como parametro ant que es un nodo a si mismo
	NodoProducto* getAnt();	//devuelve a ant
	IngresarProducto* getInfoPro();	//devuelve a infoPro	
};



#endif
