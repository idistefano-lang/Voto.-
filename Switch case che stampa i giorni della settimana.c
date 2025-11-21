#include <stdio.h>
#include <stdlib.h>

/* tipo di variabile, switch-case, giorno della settimana. Char si usa per valori non numerici.   */

int main() {
	

	char Giorno;
		
	
	
	printf("Inserire una lettera che rappresenta il giorno della settimana \n: ");
			Giorno=getchar();

	
	switch(Giorno){
		
  
		
		case 'L':
			printf("Lunedi");
		break;
		case 'M':
			printf("Martedi");
		break;
		case 'm':
			printf("mercoledi");
		case 'G':
			printf("Giovedi");
		break;
		case 'V':	
			printf("Venerdi");
		break;
		case 'S':
			printf("Sabato");
		break;
		case 'D':
			printf("Domenica");
		break;
		default: printf("Lettera non valida");	
		
			
	}
				
		
		
		
		
		
	
	return 0;
}
