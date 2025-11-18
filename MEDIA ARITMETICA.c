#include <stdio.h>
#include <stdlib.h>

/* media aritmetica  */

int main() {
	
	float array[5];
	float somma=0;
	float media=0;
	int i;
	
	
	
	for(i=0;i<5;i++){
		printf("Dammi i numeri del vettore");
		scanf("%f",&array[i]);
		somma=somma+array[i];
		}
		
		media=somma/5;
		printf("Media aritmetica %0.2f ", media);
	
	
	
	
	return 0;
}
