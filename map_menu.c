#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fun_desc {
char *name;
char (*fun)(char);
};

int main(int argc, char** argv)
{
	while(!feof(stdin))
	{
		char* line = calloc(64,sizeof(char));
		line = fgets(line,64,stdin);
		printf("%s",line);
		free(line);
	}
	return 0;
}
