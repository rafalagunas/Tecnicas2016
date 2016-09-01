#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct NodoContacto {
char Nombre[100];
int num;
char celular[10];
char carrera[100];
NodoContacto *sig;
NodoContacto *ant;
}NodoContacto;


void agregar_adelante(int);
void recorrer(NodoContacto *);
void recorrer_por_atras(NodoContacto *, int num);
struct NodoContacto *prim, *ult;

int main(){
int a, opc, num;
prim = (struct NodoContacto *) NULL;
ult = (struct NodoContacto *) NULL;
    do {
        printf("\nEliga su opcion: \n1.Crear lista doble\n2. Recorrer lista de derecha a izquierda \n3.Recorrer lista izquierda a derecha \n4. Salir\n");
        scanf("%d",&opc);
        switch(opc){
            
            case 1: printf("\nCuantos contactos=");
            scanf("%i",&num);
            agregar_adelante(num);break;
            case 2: recorrer(prim);break;
            case 3: recorrer_por_atras(ult, num); break;
            case 4: break;
            default: printf("Operacion no valida\n");
            break;
        }
    }while(opc!=4);
return 0;
}

void agregar_adelante(int TAM){

struct NodoContacto *nuevo;
    if (nuevo==NULL){
    printf("Agregado por adelante\n");
    }
    for(int i=1;i<=TAM;i++){
        nuevo = (struct NodoContacto *) malloc (sizeof (struct NodoContacto));
        strcpy(nuevo->Nombre, "Rafa");
        nuevo->num=i;
        strcpy(nuevo->celular, "9982145027");
        strcpy(nuevo->carrera, "Telematica");
        //nuevo->ant=NULL;//ant=NULL;
                nuevo->sig=prim;
        if(prim==NULL){
            prim=nuevo;
            ult=nuevo;
        }
        else{
             prim->ant=nuevo;
             prim=nuevo;
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
        printf("Nombre: %s \n num: %d\n Celular: %s\nCarrera: %s\n\n", aux->Nombre, aux->num, aux->celular, aux->carrera);
    aux=aux->sig;
    con++;
    }
    if (con==0) {
        printf("\n\n No hay contactos \n");
    }
}


void recorrer_por_atras(NodoContacto[], int num){
    int con;
    struct NodoContacto *aux;
    con=num;
    aux=ult;
    printf("\nEsta es la lista: \n");
    while (aux!=NULL){
        printf("Nombre: %s \n num: %d\n Celular: %s\nCarrera: %s\n\n", aux->Nombre, aux->num, aux->celular, aux->carrera);
    aux=aux->ant;
    con--;
    }
    if (con==0) {
        printf("\n");
    }
}