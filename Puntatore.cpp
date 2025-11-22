#include <stdio.h>

int main() {
    int numero = 10;      // Una variabile intera
    int *puntatore;       // Dichiarazione di un puntatore a int

    puntatore = &numero;  // Il puntatore contiene l'indirizzo di 'numero'

    printf("Valore di numero: %d\n", numero);
    printf("Indirizzo di numero: %p\n", (void*)&numero);
    printf("Valore del puntatore (indirizzo): %p\n", (void*)puntatore);
    printf("Valore puntato dal puntatore: %d\n", *puntatore);

    return 0;
}
