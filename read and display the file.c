#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{

	FILE* ptr;
	ptr = fopen("her.txt", "r");
	char file[100];
	fgets(file,100,ptr);
	printf("%s",file);
    fclose(ptr);
    return 0;
}

