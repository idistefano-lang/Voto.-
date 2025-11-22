#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 2

/* lettura stringhe */

struct persona{
	
	char nome[30];
	char cognome[30];
	unsigned short int eta;
};

void leggistringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}
 
 	
int main(){
	
	int i;

	struct persona p[DIM];
	for(i=0;i<DIM;i++){
		printf("Inserisci nome :\n");
		leggistringa(p[i].nome,30);
		printf("Inserisci Cognome: \n");
		leggistringa(p[i].cognome,30);
		printf("Inserisci Eta: \n");
		scanf("%d",&p[i].eta);
		getchar();
		
	}
	
	for(i=0;i<DIM;i++){
		printf("nome = %s\n", p[i].nome);
 
  

  	printf("cognome = %s\n", p[i].cognome);
 
	
	printf("eta = %d\n", p[i].eta);
		
	}
	
	

	
}

	

