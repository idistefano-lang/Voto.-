#include <stdio.h>
#include <stdlib.h>
#define DIM 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int v[DIM];
	v[0]=1;
	v[1]=2;
	int i;
	
	
	for(i=2;i<DIM;i++){
		v[i]=v[i-1]+v[i-2];
		
	}
	for(i=0;i<DIM;i++){
    printf("v[%d] = %lld\n", i, v[i]); 
  }
	return 0;
}

