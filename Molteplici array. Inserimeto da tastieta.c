#include <stdio.h>
#include <stdlib.h>

/* somma di due v1+v2=v3 vettori, con valore da inserire da tastiera */

int main() {
	int v1[10];
	int v2[10];
	int v3[10];
	int i;
	
	for(i=0;i<10;i=i+1){
		printf("Inserisci il valore v1 %d \n",i);
		scanf("%d",&v1[i]);
	}
	
	for(i=0;i<10;i=i+1){
		printf("Inserisci il valore v2 %d \n",i);
		scanf("%d",&v2[i]);
	}
	
	for(i=0;i<10;i=i+1){
		v3[i]=v1[i]+v2[i];
		printf("Somma del primo e del secondo vettore %d \n",v3[i]);
		
	}
	
	
	return 0;
}
