#include "ContenedorInven.h"


ContenedorInven::ContenedorInven(){
	cabeza=NULL;//coloca en NULL el puntero
	fin=NULL;//coloca en NULL el puntero
}

ContenedorInven::~ContenedorInven(){
	NodoInventario* aux;
	while(cabeza!=NULL){//mientras cabeza no sea igual a NULL
		aux=cabeza;
		cabeza=cabeza->getSig();//borra de adelante hasta atras
		delete aux;	
	}	
}

void ContenedorInven::agregar(NodoInventario* nuevo){
		
	if(vacia()){//si la lista esta vacia
		cabeza=nuevo;
		fin=nuevo;
	
	}else{//en caso de no estar vacia
		nuevo->setAnt(fin);
		fin->setSig(nuevo);
		fin=nuevo;
	}
	
	
}

bool ContenedorInven::vacia(){
	return cabeza==NULL;//retona verdadero o falso si la lista esta vacia o llena
}

void ContenedorInven::guardar(){
	FILE *archivo;
	archivo=fopen("Inventario.txt","wb+");
	if(!vacia()){
		NodoInventario* aux=cabeza;
		while(aux!=NULL){
			fwrite(aux->getInfoInve(),sizeof(Inventario),1,archivo);
			aux=aux->getSig();
		}
	}
	fclose(archivo);
}


void ContenedorInven::recuperar(){
	FILE* archivo=fopen("Inventario.txt","rb+");
	while(!feof(archivo)){
		Inventario* nuevo=new Inventario();
		if(fread(nuevo,sizeof(Inventario),1,archivo)==1){
			agregar(new NodoInventario(nuevo));
		}
	}
	fclose(archivo);
	
	
}



