#include "IngreasarCliente.h"


ingresarCliente::ingresarCliente(){
	
}

void ingresarCliente::setCedula(string cedula){
	strcpy(this->cedula,cedula.c_str());//iguala al parametro
}

string ingresarCliente::getCedula(){
	return cedula;//devuelve a cedula
}
void ingresarCliente::setNombre(string nombre){
	strcpy(this->nombre,nombre.c_str());//iguala al parametro
}
string ingresarCliente::getNombre(){
	return nombre;//devuelve a nombre
}
void ingresarCliente::setDireccion(string direccion){
	strcpy(this->direccion,direccion.c_str());//iguala al parametro
}
string ingresarCliente::getDireccion(){
	return direccion;//devuelve a direccion
}


