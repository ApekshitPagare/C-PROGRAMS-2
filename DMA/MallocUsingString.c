#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
	int i;
	char *A;
	A=(char *)malloc(SIZE*sizeof(char));
	
	printf("Enter String:\n");	
	scanf("%s",A);

	printf("Elements Are:\n");
	printf("%s\t",A);
	free(A);

	return 0;
}
