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

int main()
{
	int i;
	struct Student *p;
	int SIZE;
	printf("Enter the Number of Students:\n");
	scanf("%d",&SIZE);

	p=(int *)malloc(SIZE*sizeof(int));

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
	return 0;
}
