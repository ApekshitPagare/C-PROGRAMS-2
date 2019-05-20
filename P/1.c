#include<stdio.h>


void getSUM(int *x,int *y)
{
	int sum=0;
	sum=*x+*y;
	printf("Sum is %d\n",sum);
}


int main()
{
	int i;
	int a=0;
	int b=0;

	printf("Enter 2 numbers:\n");
	scanf("%d%d",&a,&b);

	getSUM(&a,&b);

	return 0;
}


