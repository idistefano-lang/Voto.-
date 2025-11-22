#include <stdio.h>

int main(){
	
	int i=0;
	int v;
	
	printf("Quante volte vuoi la scritta ciao? ");
	scanf("%d", &v);
	
	while(i<v){
		printf("Ciao\n");
		i++;
	}
	
}
