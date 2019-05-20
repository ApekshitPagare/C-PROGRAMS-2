#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student {
	char N[50];
	int R;
	int A;
	int M_MARKS;
	int P_MARKS;
	int C_MARKS;
};

void display(struct Student *P,int size)
{
	int i;
	float per;
	for(i=1;i<size;i++)
	{
		per=0;
		printf("\nStudent %d\n",i);
		printf("\nName:\n");
		printf("%s",(P+i)->N);
		
		printf("\nthe Roll Number:\n");
		printf("%d",(P+i)->R);

		printf("\nthe Age:\n");
		printf("%d",(P+i)->A);

		printf("\nMaths Marks:\n");
		printf("%d",(P+i)->M_MARKS);
		
		printf("\nChemistry Marks:\n");
		printf("%d",(P+i)->C_MARKS);
	
		printf("\nPhysics Marks:\n");
		printf("%d",(P+i)->P_MARKS);

		per=((((P+i)->P_MARKS)+((P+i)->M_MARKS)+((P+i)->C_MARKS))*100)/300;
		printf("\nPercentage=%f\n",per);
	}
}


int main()
{
	int i;
	int SIZE=0;
	printf("Enter the SIZE of Memory to be allocated:\n");
	scanf("%d",&SIZE);
	
	struct Student *p;
	p=(int *)calloc(SIZE,sizeof(int));

	for(i=1;i<SIZE;i++)
	{
		printf("Enter the Name:\n");
		scanf("%s",&(p+i)->N);
		
		printf("Enter the Roll Number:\n");
		scanf("%d",&(p+i)->R);

		printf("Enter the Age:\n");
		scanf("%d",&(p+i)->A);

		printf("Enter Maths Marks:\n");
		scanf("%d",&(p+i)->M_MARKS);
		
		printf("Enter Chemistry Marks:\n");
		scanf("%d",&(p+i)->C_MARKS);
	
		printf("Enter Physics Marks:\n");
		scanf("%d",&(p+i)->P_MARKS);
	}

	display(p,SIZE);

	return 0;
}
