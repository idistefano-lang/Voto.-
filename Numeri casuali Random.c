
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 6
/* numeri casuali/random. rand() */

int main() {
	srand(time(NULL));
	int array[6];
	int i;
	
	
	printf("Valori nello stack \n");
	
	for(i=0;i<6;i++){
		printf("array[%d]=%d\n",i,array[i]);
	}
	

	
	printf("Valori casuali \n");
	
	for(i=0;i<6;i++){
		
		array[i]=rand()% 100 + 1;
		printf("array[%d]=%d\n",i,array[i]);
	}
	

	return 0;
}
