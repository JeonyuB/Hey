#include<stdio.h>

int main(){

	int i,j,k;
	int *pi=i;

	for (pi=1;pi<100;pi++){
		for(j=1;j<=10;j++)
			printf("%d",i);
		printf("\n");
	}
	return 0;

}
