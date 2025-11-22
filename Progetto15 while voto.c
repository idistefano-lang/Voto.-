#include <stdio.h>
#include <stdlib.h>

/*while, inizializza la variabile, stampiamo tot volte.  */

int main() {
	int voto=0;
	printf("inserisci un voto");
		scanf("%d",&voto);
	
	while(voto<0 || voto>10){
		printf("voto non valido, il voto deve essere compreso tra 0 e 10\ninserisci un voto=");
		scanf("%d",&voto);
	}
	if(voto<=6){
		printf("Alunno bocciato");
	}else{
		printf("Alunno promosso");
	}
	
	return 0;
}
