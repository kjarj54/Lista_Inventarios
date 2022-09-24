#include "ContenedorCl.h"

ContenedorCl::ContenedorCl(){
	cabeza=NULL;//coloca en NULL el puntero
	fin=NULL;//coloca en NULL el puntero
}

ContenedorCl::~ContenedorCl(){//elimina los nodos
	Nodo* aux;
	while(cabeza!=NULL){//mientras cabeza no sea igual a NULL
		aux=cabeza;
		cabeza=cabeza->getSig();//borra de adelante hasta atras
		delete aux;	
	}	
}

void ContenedorCl::agregar(Nodo* nuevo){
	
	if(vacia()){//si la lista esta vacia
		cabeza=nuevo;
		fin=nuevo;
	
	}else{//en caso de no estar vacia
		nuevo->setAnt(fin);
		fin->setSig(nuevo);
		fin=nuevo;
	}
	
	
}


bool ContenedorCl::vacia(){
	return cabeza==NULL;//retona verdadero o falso si la lista esta vacia o llena
}

Nodo* ContenedorCl::buscar(string cedula){
	UI* I=new  UI();//crea un puntero de UI
	Nodo* aux=cabeza;
	while(aux!=NULL){
		if(aux->getInfo()->getCedula()==cedula){
			I->ubicarCursor(9,2);
			cout<<aux->getInfo()->getNombre();
			I->ubicarCursor(30,2);
			cout<<aux->getInfo()->getDireccion();
		}
		aux=aux->getSig();	
	}	
}

void ContenedorCl::guardar(){
	FILE *archivo;
	archivo=fopen("Clientes.txt","wb+");
	if(!vacia()){
		Nodo* aux=cabeza;
		while(aux!=NULL){
			fwrite(aux->getInfo(),sizeof(ingresarCliente),1,archivo);
			aux=aux->getSig();
		}
	}
	fclose(archivo);
}

void ContenedorCl::verCliente(){
	Nodo* aux = cabeza;
	while (aux != NULL) {
		cout<<aux->getInfo()->getCedula()<<", "<<aux->getInfo()->getNombre()<<", "<<aux->getInfo()->getDireccion()<<endl;
		aux = aux->getSig();
	}
	
}

void ContenedorCl::recuperar(){
	FILE* archivo=fopen("Clientes.txt","rb+");
	while(!feof(archivo)){
		ingresarCliente* nuevo=new ingresarCliente();
		if(fread(nuevo,sizeof(ingresarCliente),1,archivo)==1){
			agregar(new Nodo(nuevo));
		}
	}
	fclose(archivo);
}


