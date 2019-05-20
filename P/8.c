#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0; 
	int A[SIZE][SIZE];
	int e;

	int *p[SIZE][SIZE];


	printf("Enter Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{	
			p[i][j]=&A[i][j];
		}
	}
	printf("Matrix is:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%d\t",*p[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}


