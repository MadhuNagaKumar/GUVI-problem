#include <stdio.h>
#include <string.h> 
int main()
{
  	char S[100], RS[100];
  	int i, j, len;
  	gets(S);
  	j = 0;
  	len = strlen(S);
  	for (i = len - 1; i >= 0; i--)
  	{
  		RS[j++] = S[i];
  	}
  	RS[i] = '\0';
  	printf("\n%s", RS);
  	return 0;
}
