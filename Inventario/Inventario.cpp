#include "Inventario.h"

Inventario::Inventario(){
	
}

void Inventario::setPrecio(float precio){	
	this->precio=precio;//iguala al parametro que recivio	
}

float Inventario::getPrecio(){
	return precio;	//retorna a precio
}

void Inventario::setCantidad(int cantidad){
	this->cantidad=cantidad;//iguala al parametro que recivio
}
int Inventario::getCantidad(){
	return cantidad;//retorna a precio
}

