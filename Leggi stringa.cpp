#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 30 


/* Lettura stringa, con inserimento da tastiera */


void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

	struct Persona{
		char nome[30];
		char cognome[30];
		int eta;
	};

int main() {
	struct Persona p;
	printf("Inserisci nome:");
	leggiStringa(p.nome,DIM);
	printf("Inserisci cognome:");
	leggiStringa(p.cognome,DIM);
	printf("Inserisci eta':");
	scanf("%d",&p.eta);
	
	
	
	return 0;
}

