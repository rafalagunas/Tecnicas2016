#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct punto{
unsigned x;
unsigned y;
char color;
punto *sig;

}punto;

void PrintList(punto L);

int main() {
	punto p1, aux;
	p1.x = 5;
	p1.y = 6;
	punto p2;
	p2.x = 7;
	p2.y = 8;
	punto p3;
	p1.sig=&p2;         // así se apunta P1 A P2
	p2.sig=&p3;
	p3.x = 9;
	p3.y = 10;
	p3.sig=&p3;
	punto p4;
    p4.x = 11;
	p4.y = 12;
	p3.sig = &p4;
	p4.sig = &p4;
	PrintList(p1);
	return 0;
}
