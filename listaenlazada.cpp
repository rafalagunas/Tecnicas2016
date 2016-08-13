#include <stdio.h>

typedef struct NodoLista {

char *Contacto;
struct NodoLista *sig;

}Nodo;


typedef struct Listas {

Nodo *inicio;
Nodo *fin;
	
}Lista;


void crearlista(Lista *lista) {

int tam;

	tam = 0;
	lista->inicio = NULL;
	lista->fin = NULL;
		
}

int main(){

return 0;
}
