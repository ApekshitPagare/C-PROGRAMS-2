#include<stdio.h>
#define SIZE 5
int main()
{
	int i; 
	int A[SIZE];
	int B[SIZE];

	int *p[SIZE];
	int *q[SIZE];

	printf("Enter Array 1:\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		p[i]=&A[i];
	}
	
	for(i=0;i<SIZE;i++)
	{
		q[i]=&B[i];
	}

	int j=0;

	for(i=0;i<SIZE;i++)
	{
		*q[j]=*p[i];
		j++;
	}

	
	
	printf("\nCopied Array:\n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",*q[i]);
	}
	printf("\n");
	return 0;
}

