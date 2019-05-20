#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrcatt(char *s1, char *s2)
{
    int a = strlen(s1);
    int b = strlen(s2);
    int i, size_ab = a+b;

    char *s3 = malloc (size_ab*sizeof(char)); //sizeof(char) is always 1

    for(i=0; i<a; i++) { //inefficient
        (s3[i])=s1[i];
    }    

    for(i=0; i<b; i++) { //inefficient
        (s3[i+a])=s2[i];
    }

    s3[size_ab]='\0';

    return s3;
}


int main()
{
   	char s1[]="12345";
   	char s2[]="qwerty";
	int a = strlen(s1);
    	int b = strlen(s2);
    	int i, size_ab = a+b;
   	char *s3;
	 
        s3=(char *)malloc(size_ab*sizeof(char)); //sizeof(char) is always 1
	strcat(s1,s2);
	int j=0;
	int c=strlen(s1);

	for(i=0;i<c;i++)
	{
		s3[j]=s1[i];
		j++;
	}	
   	printf("%s\n", s3);
   	free(s3);
   	return 0;
}

/*Cant USE RE ALLOC in String*/
