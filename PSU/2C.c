#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Distance {
	int d1;
	int d2;
};

void display(struct Distance *D,int size)
{
	int i;
	int sum=0;
	sum=D->d1+D->d2;
	printf("Sum is %d\n",sum);
}

int main()
{
	int i;
	struct Distance *d;
	int SIZE;
	printf("Enter the Size of memory to be allocated:\n");
	scanf("%d",&SIZE);

	d=(int*)calloc(SIZE,sizeof(int));

	for(i=0;i<SIZE;i++)
	{
		printf("Enter Distance 1:\n");
		scanf("%d",&(d+i)->d1);

		printf("Enter Distance 2:\n");
		scanf("%d",&(d+i)->d2);

	}

	display(d,SIZE);

	return 0;

}
