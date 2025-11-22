#include <stdio.h>
#include <stdlib.h>



/* Puntatore. incrementa */
	void incrementa(int*n){
		*n=*n+1;
	}

int main() {
	
	int x=5;
	incrementa(&x);
	

	printf("%d",x);
	
	
	return 0;
}



