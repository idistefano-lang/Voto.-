#include <stdio.h>
#include <stdlib.h>
#define N 6

/* Conta dei numeri pari e dispari. 
Dato un array di interi, contare quanti sono pari e quanti sono dispari. */

int main() {
	int array[6];
	int i;
	int pari=0;
	int dispari=0;
	
	for(i=0;i<6;i++){
		
		printf("Inserisci il %d numero\n ",i+1);
		scanf("%d",&array[i]);
		if(array[i]%2==0){
			pari=pari+1;
		}else{
			dispari=dispari+1;
		}
		
		
	}
	printf("numero pari %d \n :",pari);
	printf("numero dispari %d \n:",dispari);
		
		return 0;
	}
	
	
	
	
	

