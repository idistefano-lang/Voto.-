#include <stdio.h>
#include <stdlib.h>

int calcolaEta(int annoNascita,int annoAttuale){
	return annoAttuale-annoNascita;
}



int main(){
	int annoNascita, annoAttuale,eta;
	printf("----Inserisci anno di nascita----:\n");
	scanf("%d",&annoNascita);
	printf("----Inserisci anno attuale----:\n");
	scanf("%d",&annoAttuale);
	eta=calcolaEta(annoNascita,annoAttuale);
	printf("Calcolo eta':%d",eta);
	
}

