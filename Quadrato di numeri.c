#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int n;

int quadrato(){
	n=n*n;
	printf("il nuovo valore di n e' :%d\n",n);
	return n;
}

int main() {
	int k=0;
	printf("Inserisci un numero:");
	scanf("%d",&n);
	n=quadrato(n);
	printf("il valore di a e': %d\n",n);
}


