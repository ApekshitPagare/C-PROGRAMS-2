#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	int j=0;
	char first[100];
	char c[100];
	char *s1[100];
	char *s2[100];

	printf("Enter the String:\n");
	scanf("%10[0-9a-zA-Z ]",first);

	int len=strlen(first);


	for(i=0;i<len;i++)
	{
		s1[i]=&first[i];
	}
	for(i=0;i<100;i++)
	{
		s2[i]=&c[i];
	}
	for(i=len-1;i>=0;i--)
	{
		*s2[j]=*s1[i];
		j++;
	}
	
	int len1=strlen(*s2);
	*s2[j]='\0';	
	printf("Reversed String is %s\n",*s2);
	
	return 0;
}
