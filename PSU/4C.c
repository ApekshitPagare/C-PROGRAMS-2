#include<stdio.h>
#include<stdlib.h>

struct Student {
	char N[50];
	int R;
	int A;
};

void display(struct Student *S,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("Student %d\n",i+1);
		printf("Name:%s\t",(S+i)->N);
		printf("R.No:%d\t",(S+i)->R);
		printf("Age:%d\t",(S+i)->A);
		printf("\n");
	}
}

void displayA(struct Student *S,int size)
{
	int i;
	printf("Student with Age 14:\n");
	for(i=0;i<size;i++)
	{
		if((S+i)->A==14)
		{
			printf("Name:%s\n",(S+i)->N);
			printf("\n");
		}
	}
}

void displayR(struct Student *S,int size)
{
	int i;
	printf("Student with Even Roll Number:\n");
	for(i=0;i<size;i++)
	{
		if((S+i)->R%2==0)
		{
			printf("Name:%s\n",(S+i)->N);
		}
	}
}

void displayD(struct Student *S,int size)
{
	int i;
	int r=0;
	printf("Enter the Roll Number:\n");
	scanf("%d",&r);
	printf("Name of Student with Associated Roll Number:\n");
	for(i=0;i<size;i++)
	{
		if((S+i)->R==r)
		{

			printf("\nName:%s\t",(S+i)->N);
			printf("\n");
		}
	}
}

int main()
{
	int i;
	struct Student *p;
	int SIZE;
	printf("Enter the Number of Students:\n");
	scanf("%d",&SIZE);

	p=(int *)calloc(SIZE,sizeof(int));

	for(i=0;i<SIZE;i++)
	{
		printf("Enter the Name:\n");
		scanf("%s",&(p+i)->N);
		
		printf("Enter the Roll Number:\n");
		scanf("%d",&(p+i)->R);

		printf("Enter the Age:\n");
		scanf("%d",&(p+i)->A);
	}

	display(p,SIZE);
	displayA(p,SIZE);
	displayR(p,SIZE);
	displayD(p,SIZE);

	return 0;
}
