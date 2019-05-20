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

	for(i=0;i<100;i++)
	{
		s1[i]=&first[i];
	}
	
	strcpy(c,*s1);
	int len=strlen(c);
	for(i=0;i<len;i++)
	{
		s2[i]=&c[i];
	}
	printf("Copied String is %s\n",*s2);
	return 0;
}
