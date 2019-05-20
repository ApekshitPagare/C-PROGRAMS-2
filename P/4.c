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

	printf("Enter Array 2:\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&B[i]);
	}

	printf("Before Swaping:\n");
	printf("Array 1 :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	printf("Array 2 :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",B[i]);
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
	int temp[SIZE];

	for(i=0;i<SIZE;i++)
	{
		temp[j]=*p[i];
		j++;
	}

	j=0;
	for(i=0;i<SIZE;i++)
	{
		*p[j]=*q[i];
		j++;
	}
	
	j=0;
	for(i=0;i<SIZE;i++)
	{
		*q[j]=temp[i];
		j++;
	}

	
	printf("\nAfter Swaping:\n");
	printf("Array 1 :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",*p[i]);
	}
	printf("\n");
	printf("Array 2 :\n");
	for(i=0;i<SIZE;i++)
	{
		printf("%d\t",*q[i]);
	}
	printf("\n");	
	return 0;
}

