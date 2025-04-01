#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
char* map(char *array, int array_length, char (*f) (char)){
  char* mapped_array = (char*)(malloc(array_length*sizeof(char)));
  /* TODO: Complete during task 2.a */
	for(int i=0;i<array_length;i++)
	{
		mapped_array[i]=(*f)(array[i]);
	}
  return mapped_array;
}
 
char my_get(char c)
{
	char ret = fgetc(stdin);
	return ret;
}

char cprt(char c)
{
	if (c>=0x20  && c<=0x7E)
	{
		printf("%c\n", c);
	}
	else
	{
		printf(".\n");
	}
	return c;
}

char encrypt(char c)
{
	if (c<=0x7F && c>=0x21)
		return c-1;
	return c;
}

char decrypt(char c)
{
	if (c<=0x7E && c>=0x1F)
		return c+1;
	return c;
}

char oprt(char c)
{
	printf("%o\n",c);
	return c;
}


int main(int argc, char **argv){
 int arrLen = 26;
  char* nArr = map("abcdefghijklmnopqrstuvwxyz",arrLen,(*oprt));
	printf("got from map:\n");
	for(int i=0;i<arrLen;i++)
	{
		printf("%c\n",nArr[i]);
	}
  free(nArr);
}

