#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct NodoContacto {
char Nombre[100];
int edad;
char celular[10];
char carrera[100];
NodoContacto *sig;
}NodoContacto;

void agregar_contacto(int );
void recorrer(NodoContacto *);
struct NodoContacto *prim, *ult;
		
int main(){
int a, opc;
prim = (struct NodoContacto *) NULL;
ult = (struct NodoContacto *) NULL;
	do {
		printf("\nEliga su opcion: \n1.Agregar contacto a la lista \n2. Recorrer lista \n3.Salir\n");
		scanf("%d",&opc);
		switch(opc){
			case 1: agregar_contacto(20);break;
			case 2: recorrer(prim);break;
			case 3: opc=4; break;
			default: printf("Operacion no valida\n");
			break;
		}
	}while(opc!=4);
return 0;
}

void agregar_contacto(int TAM){

struct NodoContacto *nuevo;
	
	if (nuevo==NULL){
	printf("No se puede añadir contacto\n");
	}
	for(int i=0;i<=TAM;i++){
		nuevo = (struct NodoContacto *) malloc (sizeof (struct NodoContacto));
		strcpy(nuevo->Nombre, "Rafa");
		nuevo->edad=i;
		strcpy(nuevo->celular, "9982145027");
		strcpy(nuevo->carrera, "Telematica");
		nuevo->sig=NULL;
		if(prim==NULL){
			prim=nuevo;
			ult=nuevo;
		}
		else{
	 		ult->sig=nuevo;
	 		ult=nuevo;
		}
	}
}

void recorrer(NodoContacto[]){
	int con;
	struct NodoContacto *aux;
	con=0;
	aux=prim;
	printf("\nEsta es la lista: \n");
	while (aux!=NULL){
		printf("Nombre: %s \n Edad: %d\n Celular: %s\nCarrera: %s\n\n", aux->Nombre, aux->edad, aux->celular, aux->carrera);
	aux=aux->sig;
	con++;		
	}
	if (con==0) {
		printf("\n\n No hay contactos \n");
	}
}