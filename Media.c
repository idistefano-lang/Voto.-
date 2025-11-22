#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	int a;
	int b;
	int somma;
	int media=somma/2;
	
	printf("Valore di a:");
	scanf("%d",&a);
	printf("Valore di b:");
	scanf("%d",&b);
	somma=a+b;
	media=somma/2;
	printf("Il risultato della media e': %d\n",media);
	
	
	return 0;
}

