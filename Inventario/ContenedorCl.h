#include "Nodo.h"

#if !defined(_CONTENEDORCL_H)
#define _CONTENEDORCL_H

class ContenedorCl{
private:
	Nodo* cabeza;//Puntero a nodo se pociona en el inicio
	Nodo* fin;//Puntero a nodo se pociona en el final
public:
	ContenedorCl();//constructor de la clase	
	~ContenedorCl();//destructor
	void agregar(Nodo* nuevo);//agregar informacion
	bool vacia();//comprobar si esta vacia la lista 
	Nodo* buscar(string cedula);//busca el cliente con el parametro que se pide
	void guardar();//guarda los nodos
	void verCliente();//muestra la informacion de los clientes
	void recuperar();//recupera
	
};



#endif
