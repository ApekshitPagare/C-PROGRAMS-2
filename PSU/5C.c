#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Customers
{
	int A;
	int B;
	char N[50];
};

void display(struct Customers *C,int c)
{
	int i;
	for(i=0;i<c;i++)
	{
		printf("\nCustomer=%d\n",i+1);
		printf("Name:%s\n",(C+i)->N);
		printf("Account Number:%d\n",(C+i)->A);
		printf("Balance:%d\n",(C+i)->B);
	}
}
void displayb(struct Customers *C,int c)
{
	int i;
	printf("\nCustomers with Balance less than 200:\n");
	for(i=0;i<c;i++)
	{
		if((C+i)->B<200)
		{
			printf("Name:%s\n",(C+i)->N);
		}
	}
}
void displayB(struct Customers *C,int c)
{
	int i;
	int sum=0;
	printf("\nCustomers with Incremented Balances:\n");
	for(i=0;i<c;i++)
	{
		sum=0;
		if((C+i)->B>1000)
		{
			sum=(C+i)->B;
			sum=sum+100;
			(C+i)->B=sum;
			printf("Name:%s\n",(C+i)->N);
			printf("Balance:%d\n",(C+i)->B);
		}
	}
}

int main()
{
	int i;
	struct Customers *c;
	int size=0;
	
	printf("Enter the  Size of Memory to be Allocated:\n");
	scanf("%d",&size);
	
	c=(struct Customers *)calloc(size,sizeof(struct Customers));

	for(i=0;i<size;i++)
	{
		printf("Enter Name:\n");
		scanf("%s",&(c+i)->N);

		printf("Enter Account Number:\n");
		scanf("%d",&(c+i)->A);		

		printf("Enter Balance:\n");
		scanf("%d",&(c+i)->B);
	}

	display(c,size);
	displayb(c,size);
	displayB(c,size);

	return 0;
}
