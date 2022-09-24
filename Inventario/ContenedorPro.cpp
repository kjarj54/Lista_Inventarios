#include "ContenedorPro.h"

ContenedorPro::ContenedorPro(){
	cabeza=NULL;//coloca en NULL la variable
	fin=NULL;//coloca en NULL la variable
}

ContenedorPro::~ContenedorPro(){
	NodoProducto* aux;
	while(cabeza!=NULL){//si hay contenido en la cabeza empieza el ciclo
		aux=cabeza;
		cabeza=cabeza->getSig();//mueve la cabeza al siguente nodo
		delete aux;//elimina al auxiliar
	}//elimina de adelante hacia atras
}

void ContenedorPro::agregar(NodoProducto* nuevo){
	
	if(vacia()){//si la lista esta vacia
		cabeza=nuevo;
		fin=nuevo;
	
	}else{//en caso de no estar vacia
		nuevo->setAnt(fin);
		fin->setSig(nuevo);
		fin=nuevo;
	}	
}

bool ContenedorPro::vacia(){
	return cabeza==NULL;//retorna de true o false
}

void ContenedorPro::guarda(){
	FILE *archivo;
	archivo=fopen("Productos.txt","wb+");//crea un archivo .txt
	if(!vacia()){
		NodoProducto* aux=cabeza;
		while(aux!=NULL){//el ciclo se repite para guardar todos los nodos
			fwrite(aux->getInfoPro(),sizeof(IngresarProducto),1,archivo);//escribe la informacion en el archivo
			aux=aux->getSig();//pasa al siguente nodo
		}
	}
	fclose(archivo);//cierra el archivo
}

void ContenedorPro::recuperarPro(){
	
	FILE* archivo=fopen("Productos.txt","rb+");//abre el archivo .txt
	while(!feof(archivo)){
		IngresarProducto* nuevo=new IngresarProducto();
		if(fread(nuevo,sizeof(IngresarProducto),1,archivo)==1){
			agregar(new NodoProducto(nuevo));
		}
	}
	fclose(archivo);
}

void ContenedorPro::verProductos(){	
	NodoProducto* aux = cabeza;
	while (aux != NULL) {
		cout<<aux->getInfoPro()->getCodigo()<<", "<<aux->getInfoPro()->getNombre()<<endl;
		aux = aux->getSig();
	}
	
}





