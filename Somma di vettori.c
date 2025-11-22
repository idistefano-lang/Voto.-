#include <stdio.h>
#include <stdlib.h>

/* Somma di vettori */

int main() {
	int v1[5],v2[5],v3[5];
	int i;
	
	printf("------VETTORE1------\n");
	for(i=0;i<5;i++){
		printf("v1[%d]=",i);
		scanf("%d",&v1[i]);
	}
	
	printf("------VETTORE2------\n");
	for(i=0;i<5;i++){
		printf("v2[%d]=",i);
		scanf("%d",&v2[i]);
	}
	
		printf("------VETTORE3------\n");
		for(i=0;i<5;i++){
			v3[i]=v1[i]+v2[i];
		printf("v3[%d]=%d\n",i,v3[i]);
		
	}
		
	
	return 0;
}
