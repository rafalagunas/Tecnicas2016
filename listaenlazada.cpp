	#include <stdio.h>

typedef struct NodoContacto {

char Nombre[100];
unsigned edad;
float celular;
char carrera[100];

int contador;
NodoContacto *sig;

}NodoContacto;


int main(){



struct NodoContacto Cuenta1={"Rafael", 20, 9982607763, "Telematica"};
struct NodoContacto Cuenta2={"Rafael", 20, 9982607763, "Telematica"};
struct NodoContacto Cuenta3={"Rafael", 20, 9982607763, "Telematica"};
struct NodoContacto Cuenta4={"Rafael", 20, 9982607763, "Telematica"};
struct NodoContacto Cuenta5={"Rafael", 20, 9982607763, "Telematica"};
struct NodoContacto Cuenta6={"Rafael", 20, 9982607763, "Telematica"};
struct NodoContacto Cuenta7={"Rafael", 20, 9982607763, "Telematica"};


Cuenta1.sig=&Cuenta2;
Cuenta2.sig=&Cuenta3;
Cuenta3.sig=&Cuenta4;
Cuenta4.sig=&Cuenta5;
Cuenta5.sig=&Cuenta6;
Cuenta6.sig=&Cuenta7;
Cuenta7.sig= NULL;



return 0;
}


