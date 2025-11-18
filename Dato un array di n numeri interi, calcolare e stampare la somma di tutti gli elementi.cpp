#include <stdio.h>
#include <stdlib.h>
#define N 5
/* Somma degli elementi
Dato un array di n numeri interi, calcolare e stampare la somma di tutti gli elementi */

int main() {
	
	int array[5]={7,5,4,10,12};
	int somma=0;
	int i;
	

	for(i=0;i<5;i++){
		printf("Dammi i numeri del vettore");
		scanf("%d",&array[i]);
		somma=somma+array[i];
	}
		printf("Somma=%d",somma);
	return 0;
}
