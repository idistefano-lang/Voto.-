#include <stdio.h>
#include <stdlib.h>

/* Esercizio 1  */

int main() {
    int numero;
    int count=0;
    int somma=0;
    int max,min;
    int pari=0;
	int dispari=0;
    float media;

    printf("Inserisci numeri interi:\n");
    
    while (1) {
        printf("Numero: ");
        scanf("%d", &numero);
    
    
    if (numero == 0) {
            break; 
        }
        
        count++;
    somma+=numero;
    
    if (count==1){
    	max=numero;
    	min=numero;
    	
		}else{
	if (numero>max){
        max=numero;
            }
    if (numero<min) {
        min=numero;
            }
        }
     if (numero % 2 == 0) {
            pari++;
        } else {
            dispari++;
        }
    }

    if (count == 0) {
        printf("Nessun numero valido inserito.\n");
    } else {
        media = (float)somma / count;
        printf("\nRisultati:\n");
        printf("Numeri inseriti: %d\n", count);
        printf("Somma: %d\n", somma);
        printf("Media: %.2f\n", media);
        printf("Valore massimo: %d\n", max);
        printf("Valore minimo: %d\n", min);
        printf("Numeri pari: %d\n", pari);
        printf("Numeri dispari: %d\n", dispari);
    }

    return 0;
}


		
	
    
    
