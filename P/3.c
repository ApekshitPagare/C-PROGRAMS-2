#include<stdio.h>
void getSWAP(int *x,int *y)
{
	int temp=0;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("After Swapping:\n");
	printf("A:%d\n",*x);
	printf("B:%d\n",*y);
}


int main()
{
	int i;
	int a=0;
	int b=0;
		
	printf("Enter the Values of 'A' And 'B':\n");
	scanf("%d%d",&a,&b);

	printf("Before Swapping:\n");
	printf("A:%d\n",a);
	printf("B:%d\n",b);

	getSWAP(&a,&b);

	return 0;
}
