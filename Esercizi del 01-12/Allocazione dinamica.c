#include <stdio.h>
#include <stdlib.h>


/* Malloc, per allocazione dinamica.  */

int main() {
	int n;
	int i;
	
	printf("----Inserisci----");
	scanf("%d", &n);
	int *array=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("----Inserisci valore array----");
		scanf("%d", &array[i]);
	}
	
	
	
	
	
	
	return 0;
}
