#include<stdio.h>


double average(double in1, double in2){

        return (in1+in2)/2;
}

int main()
{
        double avg,j,i;

        scanf("%le %le",&i,&j);
        avg=average(i,j);

        printf("avg: %lf",avg);
        return 0;
}
