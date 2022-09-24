#include "Producto.h"

IngresarProducto::IngresarProducto(){
	
}

void IngresarProducto::setCodigo(string codigo){
	strcpy(this->codigo,codigo.c_str());//combierte el string en una cadena para guardar en char	
}

string IngresarProducto::getCodigo(){	
	return codigo;	//retorna informacion a codigo
}

void IngresarProducto::setNombre(string nombre){
	strcpy(this->nombre,nombre.c_str());//combierte el string en una cadena para guardar en char
}

string IngresarProducto::getNombre(){
	return nombre;//retorna informacion a nombre
}


