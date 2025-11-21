#include <stdio.h>
#include <stdlib.h>
#define N 5
/* MEDIA CON FLOAT, che serve per inserire numeri con la virgola */

int main() {
	
	int v[N];
	float somma=0;
	float media;
	int i;
	
	
	printf("Inserisci i numeri di cui vuoi calcolare la media: \n");
	
	for(i=0;i<N;i++){
		printf("numero %d:", i+1);
		scanf("%d", &v[i]);
		somma+= v[i];//somma=somma+v[i]
	}
	
	media=somma/N;
	printf("media=%f\n",media);
	return 0;
}

