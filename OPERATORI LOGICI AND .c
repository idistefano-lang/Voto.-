#include <stdio.h>
#include <stdlib.h>

/* OPERATORI LOGICI AND  */




	int main(){
		int voto;
		int condotta;
		printf("----Inserisci voto----\n");
		scanf("%d",&voto);
		printf("----Inserisci condotta----\n");
		scanf("%d",&condotta);
		
		
		if(voto>=6&&condotta>6){
			printf("----Promosso----\n");
		}else{
			printf("----Bocciato----\n");
		}
			
		
		
		return 0;
	
	}
