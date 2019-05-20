#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0; 
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int S[SIZE][SIZE];
	int *p[SIZE][SIZE];
	int *q[SIZE][SIZE];
	int *r[SIZE][SIZE];

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
	printf("Enter Elements:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{	
			q[i][j]=&A[i][j];
		}
	}
	
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			S[i][j]=*p[i][j]+*q[i][j];
		}
	}

	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{	
			r[i][j]=&S[i][j];
		}
	}	
	
	printf("SUM Matrix is:\n");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			printf("%d\t",*r[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
}


