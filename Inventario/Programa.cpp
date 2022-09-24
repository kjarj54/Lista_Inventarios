#include "Programa.h"

Programa::Programa(){
	
}

void Programa::run(){	
	char r;//variable
	int res;//variable
	float price;//variable
	int can;//variable
	string ced;//variable
	string nom;//variable
	string dir;//variable
	string cedCL;//variable
	string cod;//variable
	string nomPro;//variable
		
	UI* I=new  UI();//crea un puntero de UI
	ingresarCliente* iC=new ingresarCliente();//crea un puntero de ingresarCliente
	IngresarProducto* iP=new IngresarProducto();//crea un puntero de IngresarProducto
	Inventario* iV=new Inventario();//crea un puntero de Inventario
	ContenedorCl* CCL=new ContenedorCl();//crea un puntero de ContenedorCl
	ContenedorPro* CPR=new ContenedorPro();//crea un puntero a ContenedorPro
	ContenedorInven* CIV=new ContenedorInven();//crea un puntero de ContenedorInven
	NodoProducto* nuevoPro;//crea un puntero de NodoProducto
	Nodo* nuevoNodo;//crea un puntero de Nodo que necesita del puntero de la clase ingresarCliente
	NodoInventario* nuevoInve;//crea un puntero 
	
	I->txtColor(0,6);//colorea la el panel
	
	
	do{
		I->limpiar();//limpia la pantalla

		
		cout<<"" 
        "\n" 
        "\n"
        "\n"
        "\nProfesor: " 
        "\n\n"
		<<endl;
		 
		cout<<"-----------------------Menú----------------------------------" 
        "\n1.Ingreasar producto al sistema" 
        "\t2.Ingresar Cliente al sistema"
        "\n3.Ingresar inventario"
        "\t\t4.Realizar venta" 
        "\n5.Ver lista de productos"
        "\t6.Ver lista de clientes"
        "\n7.Ver lista de facturas"
        "\t\t8.Ver ventas de clientes"
        "\n9.Guardar Listados"
        "\t\t10.Salir"
		<<endl;
								
		cout<<"Digite el numero de la opción que desea\n";
		cin>>res;
		
		switch(res){//sesgun la resspuesta del usuario se ejecuta alguna de las instrucciones
		
			case 1://ingresa un producto
			
				I->limpiar();//limpia la pantalla
				
				cout<<"Digite el codigo para el producto\n";
				cin>>cod;	
				iP->setCodigo(cod);
				
				cout<<"Digite el nombre del producto\n";
				cin>>nomPro;
				iP->setNombre(nomPro);
				
				nuevoPro=new NodoProducto(iP);
				CPR->agregar(nuevoPro);
				
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;					
				break;
				
			case 2://ingresa un cliente
			
				I->limpiar();//limpia la pantalla
				
				cout<<"Digite la cedula de la persona\n";
				cin>>ced;
				iC->setCedula(ced);	
							
				cout<<"Digite el nombre \n";
				cin>>nom;	
				iC->setNombre(nom);
				
				cout<<"Introduzca su direccion\n";
				cin>>dir;
				iC->setDireccion(dir);
				
				nuevoNodo=new Nodo(iC);
				CCL->agregar(nuevoNodo);

				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
					
			case 3://agrega inventario

				I->limpiar();//limpia la pantalla
				cout<<"Digite el codigo del producto\n";
				cin>>cod;
				
				cout<<"Digite la cantidad del producto\n";
				cin>>can;
				iV->setCantidad(can);
				
				cout<<"Digite el precio del producto\n";
				cin>>price;
				iV->setPrecio(price);
								
				nuevoInve=new NodoInventario(iV);
				CIV->agregar(nuevoInve);
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 4://realiza una venta
				I->limpiar();//limpia la pantalla
				CCL->recuperar();
				
				cout<<"Digite el numero de cedula del cliente:";
				I->ubicarCursor(40,0); 
				cin>>ced;
		
				I->ubicarCursor(0,2);
				cout<<"Nombre:";				
				
				
				I->ubicarCursor(20,2);
				cout<<"Direccion:";	
				
				CCL->buscar(ced);	
				do{
					
					I->ubicarCursor(40,2);
					cout<<"Digite el codigo del producto:";
					I->ubicarCursor(70,2);
					cin>>cod;
					
					cout<<"\n";
					cout<<"desea ingresar otro producto s=si n=no\n";
					cin>>r;
				}while(r == 's' || r == 'S');
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 5://muestra la lista de productos
				I->limpiar();//limpia la pantalla
				CPR->recuperarPro();
				CPR->verProductos();
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;		
				break;
				
			case 6://muestra la lista de clientes
			
				I->limpiar();//limpia la pantalla
				CCL->recuperar();
				CCL->verCliente();
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 7://muestra lista de facturas
				
				I->limpiar();//limpia la pantalla
				
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 8://muestra las ventas de los clientes
				
				I->limpiar();//limpia la pantalla
				cout<<"Digite el numero de cedula del cliente que desea analizar\n";
				cin>>cedCL;				
				CCL->buscar(cedCL);
				
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;						
				break;
				
			case 9:	//guarda listados
			
				I->limpiar();//limpia la pantalla
				CCL->guardar();
				CPR->guarda();
				CIV->guardar();
				cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
				cin>>r;	
				break;
				
			case 10://sale del ciclo y por ende del programa
				I->limpiar();//limpia la pantalla
				r='n';
				break;																																								
		}	
				
//		cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
//		cin>>r;			
	}while(r == 's' || r == 'S');
	

	delete iC;//elimina el puntero y devuelve la memoria 
	delete I;//elimina el puntero y devuelve la memoria 
	delete CCL;//elimina el puntero y devuelve la memoria 
	delete CPR;//elimina el puntero y devuelve la memoria 
	delete iP;//elimina el puntero y devuelve la memoria 
	delete iV;//elimina el puntero y devuelve la memoria 
}


