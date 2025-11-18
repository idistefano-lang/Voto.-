#include <stdio.h>
#include <stdlib.h>

/* Voto IF/ELSE */

int main() {
	
	int voto;
	
	printf("inserire voto");
	
	scanf("%d",&voto);
	
	 if(voto>=6){
	 	
	 	printf("promosso");
	 }else {
	printf("bocciato");
	 }
	return 0;
}
