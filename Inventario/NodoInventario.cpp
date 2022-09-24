#include "NodoInventario.h"

NodoInventario::NodoInventario(Inventario* nuevo){
	infoInve=nuevo;//iguala a nuevo con la informacion de la clase ingresarCliente
	sig=NULL;//Pone en 0 o NULL al puntero
	ant=NULL;//Pone en 0 o NULL al puntero
}

NodoInventario::~NodoInventario(){
	delete infoInve;//elimina a la informacion almacenada en info
}

void NodoInventario::setSig(NodoInventario* sig){
	this->sig=sig;//iguala al atributo a parametro
}
void NodoInventario::setAnt(NodoInventario* ant){
	this->ant=ant;//iguala al atributo a parametro
}
Inventario* NodoInventario::getInfoInve(){
	return infoInve;//devuelve al atributo
}
NodoInventario* NodoInventario::getSig(){
	return sig;//devuelve al atributo
}
NodoInventario* NodoInventario::getAnt(){
	return ant;//devuelve al atributo
}


