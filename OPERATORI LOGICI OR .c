#include<stdio.h>
#include <stdlib.h>
/* OPERATORI LOGICI OR */

	int main(){
		int age;
		char gender;
		printf("----Inserisci eta----\n");
		scanf("%d",&age);
		getchar();
		printf("----Inserisci gender----\n");
		scanf("%d",&gender);
		gender=getchar();
		
		
		if(age>=18||gender=='F'){
			printf("----Puoi entrare----\n");
		}else{
			printf("----Non puoi entrare----\n");
		}
			
		
		
		return 0;
		
		
	
	}
	
