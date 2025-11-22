#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int somma(){
	int a;
	int b;
		
	printf("inserisci il primo numero");
	scanf("%d",&a);
	printf("inserisci il secondo numero");
	scanf("%d",&b);
	return a+b;
}

int sottrazione(){
	int a,b;
	
	printf("inserisci il primo numero");
	scanf("%d",&a);
	printf("inserisci il secondo numero");
	scanf("%d",&b);
	return a-b;
}	

int divisione(){
	int a,b;
	
	printf("inserisci il primo numero");
	scanf("%d",&a);
	printf("inserisci il secondo numero");
	scanf("%d",&b);
	printf("%d",a/b);
	return a/b;
}	

int moltiplicazione(){
	int a,b;
	
	printf("inserisci il primo numero");
	scanf("%d",&a);
	printf("inserisci il secondo numero");
	scanf("%d",&b);
	printf("%d",a*b);
	return a*b;
}	






int main() {
	
	int scelta=0;
	int risultato;
	
	do{
		printf("...... Menu......\n");
		printf("\n 1.somma \n 2.sottrazione \n 3.divisione \n 4.moltiplicazione \n 0.esci");
		printf("\n inserisci scelta:");
		scanf("%d",&scelta);
		
		switch(scelta){
			case 1: 
			risultato=somma();
			printf("Il risultato e':%d\n",risultato);
			break;
		
		case 2:
			
			risultato=sottrazione();
			printf("Il risultato e':%d\n",risultato);
			break;
		
		
		case 3:
			
			risultato=divisione();
			printf("Il risultato e':%d\n",risultato);
			
		break;
		
		
		case 4:
		 	
		 	risultato=moltiplicazione();
			printf("Il risultato e':%d\n",risultato);
			
		break;
	
		case 0:
		break;
			
		default:
			printf("Scelta non valida \n");
	}
	
	}while(scelta!=0);
	
}
	
	


