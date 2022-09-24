#include "Nodo.h"


Nodo::Nodo(ingresarCliente* nuevo){
	info=nuevo;//iguala a nuevo con la informacion de la clase ingresarCliente
	sig=NULL;//Pone en 0 o NULL al puntero
	ant=NULL;//Pone en 0 o NULL al puntero
}

Nodo::~Nodo(){
	delete info;//elimina a la informacion almacenada en info
}

void Nodo::setSig(Nodo* sig){
	this->sig=sig;//iguala al atributo a parametro
}
void Nodo::setAnt(Nodo* ant){
	this->ant=ant;//iguala al atributo a parametro
}
ingresarCliente* Nodo::getInfo(){
	return info;//devuelve al atributo
}
Nodo* Nodo::getSig(){
	return sig;//devuelve al atributo
}
Nodo* Nodo::getAnt(){
	return ant;//devuelve al atributo
}


