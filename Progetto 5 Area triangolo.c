#include <stdio.h>
#include <stdlib.h>

/* Area triangolo */

int main() {
	float Area;
	float Base;
	float Altezza;
	
	
	printf("\nAltezza del triangolo: ");
	scanf("%.2f", &Altezza);
	printf("\nBase del triangolo:");
	scanf("%.2f", &Base);

	
	Area= Base * Altezza /2;	
	
	printf("%.2f", Area);

	
	return 0;
}
