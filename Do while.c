#include <stdio.h>
#include <stdlib.h>

/* Do while  */

int main() {
	
	int scelta;
	int somma;
	int sottrazione;
	int esci;
	int a=0;
	int b=0;
	
	do{
		printf("...... Menu......\n");
		printf("\n 1.somma \n 2.sottrazione \n 3.moltiplicazione \n 4.divisione \n 0.esci");
		printf("\n inserisci scelta");
		scanf("%d",&scelta);
		if(scelta==1){
		printf("Inserisco il primo valore della somma:");
		scanf("%d",& a);
		printf("Inserisco il secondo valore della somma:");
		scanf("%d",&b);
		
		printf("%d \n",a+b);}
		else
		if(scelta==2){
		printf("inserisco il primo valore della differenza:");
		scanf("%d",&a);
		printf("inserisco il secondo valore della differenza:");
		scanf("%d",&b);
		
		printf("%d \n",a-b);
		}
		
		if(scelta==3){
		printf("Inserisco il primo valore della moltiplicazione:");
		scanf("%d",& a);
		printf("Inserisco il secondo valore della moltiplicazione:");
		scanf("%d",&b);
		
		printf("%d \n",a*b);
		}
		
		if(scelta==4){
		printf("Inserisco il primo valore della divisione:");
		scanf("%d",&a);
		printf("inserisco il secondo valore della divisione:");
		scanf("%d",&b);
		
		printf("%d",a/b);
		}
	}while(scelta!=0);
	
	
	
	return 0;
}
