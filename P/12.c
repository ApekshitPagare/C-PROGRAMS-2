#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char first[100];
	char *s1[100];

	printf("Enter the String:\n");
	scanf("%10[0-9a-zA-Z ]",first);

	for(i=0;i<100;i++)
	{
		s1[i]=&first[i];
	}
	
	int len=strlen(*s1);
	printf("Lenght is %d\n",len);
	return 0;
}
