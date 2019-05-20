#include<stdio.h>
void getsum(int *x,int *y)
{
	int sum=0;
	sum=*x+*y;
	printf("Sum=%d\n",sum);
}
int main()
{
	int a=0;
	int b=0;
	printf("Enter the Values of 'a' & 'b':\n");
	scanf("%d%d",&a,&b);

	getsum(&a,&b);

	return 0;
}
