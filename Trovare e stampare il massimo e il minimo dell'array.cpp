#include <stdio.h>
#include <stdlib.h>
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int v[N];
	int max;
	int min;
	int i;
	
	printf("Inserisci i numeri: \n");
	for(i=0;i<N;i++){
		printf("Numero %d:",i);
		scanf("%d",&v[i]);
		
	}
	max=v[0];
	min=v[0];
	for(i=0;i<N;i++){
		if(v[i]>max){
			max=v[i];
		}
		if(v[i]<min){
			min=v[i];
		}
		
	}
	
	
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	
	
	
	return 0;
	
	}

