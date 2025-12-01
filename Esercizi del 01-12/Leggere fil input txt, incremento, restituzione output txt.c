#include <stdio.h>
/* Lettura file input e incremento del valore al suo interno di 1 e il risultato salvarlo in un fil output, sempre txt*/

int main() {
    int numero;
    FILE *input, *output;

    input = fopen("input.txt", "r");      
    fscanf(input, "%d", &numero);         
    fclose(input);                        

                  

    output = fopen("output.txt", "w");    
    fprintf(output, "%d", numero+1);        
    fclose(output);                       

    return 0;
}

