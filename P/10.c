#include<stdio.h>
#define SIZE 3
int main()
{
	int i;
	int j=0; 
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int M[SIZE][SIZE];
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
			q[i][j]=&B[i][j];
		}
	}
	
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			M[i][j]=(*p[i][j])*(*q[i][j]);
		}
	}

	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{	
			r[i][j]=&M[i][j];
		}
	}	
	
	printf("MUL Matrix is:\n");
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


