#include <stdio.h>

int main(){
	
	int base;
	int altezza; 
	int area;
	
    printf("Inserisci la base = ");
	scanf("%f", &base);
	
    printf("Inserisci l'altezza = ");
    scanf("%f", &altezza);
    
	area=base*altezza/2;
	
	printf("Area = %d", area);
	
}
