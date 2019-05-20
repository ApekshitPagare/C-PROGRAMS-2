#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char first[100];
	char c[100];
	char *s1[100];
	char *s2[100];

	printf("Enter the String:\n");
	scanf("%10[0-9a-zA-Z ]",first);

	
	printf("Enter the String 2:\n");
	scanf("%s",c);

	for(i=0;i<100;i++)
	{
		s1[i]=&first[i];
	}
	for(i=0;i<100;i++)
	{
		s2[i]=&c[i];
	}
	
	strcat(*s2,*s1);
	int len=strlen(c);
	
	printf("Concated String is %s\n",*s2);
	return 0;
}
