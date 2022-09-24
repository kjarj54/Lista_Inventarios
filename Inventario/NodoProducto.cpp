#include "NodoProducto.h"

NodoProducto::NodoProducto(IngresarProducto* nuevo){
	sig=NULL;//inicializa la variable en NULL
	ant=NULL;//inicializa la variable en NULL
	infoPro=nuevo;//la informacion es igual al nuevo
}

NodoProducto::~NodoProducto(){
	delete infoPro;//elimina lo contenido por infoPro
}

void NodoProducto::setSig(NodoProducto* sig){
	this->sig=sig;//iguala a sig
}

NodoProducto* NodoProducto::getSig(){
	return sig;//retorna a sig
}

void NodoProducto::setAnt(NodoProducto* ant){
	this->ant=ant;//iguala a ant
}

NodoProducto* NodoProducto::getAnt(){
	return ant;//retorna a ant
}

IngresarProducto* NodoProducto::getInfoPro(){
	return infoPro;//retorna a infoPro
}
