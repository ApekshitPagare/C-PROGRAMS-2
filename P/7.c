#include<stdio.h>
#define SIZE 5
int main()
{
	int i;
	int j=0; 
	int A[SIZE];
	int e;

	int *p[SIZE];


	printf("Enter Array 1:\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<SIZE;i++)
	{
		p[i]=&A[i];
	}
	int index=0;
	for(i=0;i<SIZE;i++)
	{
		printf("Element You want to search:\n");
		scanf("%d",&e);

		for(j=0;j<SIZE;j++)
		{
			if(*p[j]==e)
			{
				index=j;
				printf("Element Found At %d\n",index);
				break;
			}
		}
	}

	return 0;
}


