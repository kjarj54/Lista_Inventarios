#include "NodoInventario.h"
#if !defined(_CONTENEDORINVEN_H)
#define _CONTENEDORINVEN_H

class ContenedorInven{
private:
	NodoInventario* cabeza;
	NodoInventario* fin;
public:
	ContenedorInven();
	~ContenedorInven();
	void agregar(NodoInventario* nuevo);		
	bool vacia();
	void guardar();//guarda los nodos
	void recuperar();//recupera
	
};



#endif

