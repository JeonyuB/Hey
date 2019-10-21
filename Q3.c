#include<stdio.h>
void swap(int *pa,int *pb);

int main(){
	int a=3;
	int b=9;
	
	swap(&a,&b);

	printf("i= %d, num2= %d",a,b);

}

void swap(int *pa,int *pb){
	int temp;

	temp=*pa;
	*pa=*pb;
	*pb=temp;
}
