#include <stdio.h>
#include <stdlib.h>


/* Malloc, per allocazione dinamica.  */

int main() {
	int n;
	int i;
	
	FILE *fp=fopen("output.txt","w");
	
	printf("----Inserisci : ");
	scanf("%d", &n);
	int *array=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		printf("a[%d] = ", i);
		scanf("%d", &array[i]);
	}
	
	for(i=0;i<n;i++){
		fprintf(fp, "%d\n",array[i]);
	}
	
	fclose(fp);
	
	return 0;
}
