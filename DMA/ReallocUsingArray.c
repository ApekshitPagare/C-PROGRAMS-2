#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
	int i;
	int A[SIZE];
	int *ptr;

	ptr=(int *)calloc(SIZE,sizeof(int));
	
	printf("Enter %d elements:\n",SIZE);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	int N=10;
	ptr=(int *)realloc(ptr,(N*sizeof(int)));

	printf("Enter %d elements:\n",(N-SIZE));
	for(i=SIZE;i<N;i++)
	{
		scanf("%d",(ptr+i));
	}
	
	printf("Elements Are:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",*(ptr+i));
	}

	free(ptr);

	return 0;
}
