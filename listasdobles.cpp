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


void agregar_contacto(int);
void agregar_contacto_antes_de_x(int);
void recorrer_izquierda(NodoContacto *);
void recorrer_derecha(NodoContacto *, int num);
struct NodoContacto *prim, *ult;

int main(){
int a, opc, num, pos;
prim = (struct NodoContacto *) NULL;
ult = (struct NodoContacto *) NULL;
    do {
        printf("\nElija su opcion: \n1.Crear lista doble \n2.Insertar antes de n \n3. Recorrer lista de derecha a izquierda \n4.Recorrer lista izquierda a derecha \n5. Salir\n");
        scanf("%d",&opc);
        switch(opc){
            
            case 1: printf("\nCuantos contactos=");
            scanf("%d",&num);
            agregar_contacto(num);break;
            case 2: printf("\nPosicion:");
                    scanf("%d",&pos);
                    pos= pos-1;
                    agregar_contacto_antes_de_x(pos);break;
            case 3: recorrer_izquierda(prim);break;
            case 4: recorrer_derecha(ult, num); break;
            case 5: break;
            default: printf("Operacion no valida\n");
            break;
        }
    }while(opc!=5);
return 0;
}

void agregar_contacto(int TAM){

struct NodoContacto *nuevo;
    if (nuevo==NULL){
    printf("Lista Creada\n");
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

void recorrer_izquierda(NodoContacto[]){
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


void recorrer_derecha(NodoContacto[], int num){
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

void agregar_contacto_antes_de_x(int POS){
    int i=0;
    struct NodoContacto *nuevo;
    struct NodoContacto *actual;
    nuevo = (struct NodoContacto *) malloc (sizeof (struct NodoContacto));
    strcpy(nuevo->Nombre, "Rafa");
    nuevo->num=1;
    strcpy(nuevo->celular, "9982145027");
    strcpy(nuevo->carrera, "Telematica");
    actual=prim;

    while(actual->num!=POS && actual->sig != NULL){
        actual=actual->sig;

    }
    nuevo->sig = actual;
    nuevo->ant = actual->ant;
    if(actual->ant == NULL){
        prim=nuevo;
    }
    else{
        actual->ant->sig=nuevo;
    }
    actual->ant=nuevo;
    
}