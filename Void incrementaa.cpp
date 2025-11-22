#include <stdio.h>
#include <stdlib.h>

/* incrementa. Se non voglio che la variabile mi muoia prima del tempo, 
quindi me lo faccio restituire il valore prima che viene perso, 
lo assegno ad un altra variabile e quindi non perdo il nuovo valore */


int incrementa(int n){
	n=n+1;
	printf("il nuovo valore di n e' :%d\n",n);
	return n;
}

	
	int main() {
	int k=0;
	printf("Inserisci un numero:");
	scanf("%d",&k);
	k=incrementa(k);
	printf("il valore di a e': %d\n",k);
}
	

