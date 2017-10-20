#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char string[10];
	char word[10];
	char *token;
	while(fgets(string,10,stdin))
	{
		token = strtok(string, " ");
		strncpy(word, token, 10);
		printf("token %s \n", token);
		printf("Word: %s \n", word);
	}
	return 0;
}
