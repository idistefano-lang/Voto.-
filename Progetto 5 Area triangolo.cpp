#include <stdio.h>
#include <stdlib.h>

/* Area triangolo */

int main() {
	int Area;
	int Base;
	int Altezza;
	
	
	printf("\nAltezza del triangolo: ");
	scanf("%d", &Altezza);
	printf("\nBase del triangolo:");
	scanf("%d", &Base);

	
	Area= Base * Altezza /2;	
	
	printf("%d", Area);

	
	return 0;
}
