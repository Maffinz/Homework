#include <stdio.h>
#include <stdlib.h>
#include <string.h>

OPCODE Ops[] = {{"LDA", 3}};


int main()
{
	char string[10];
	while(fgets(string,10,stdin)!= '\n')
	{
		printf("HELLO %s",string);
	}	
	return 0;
}
