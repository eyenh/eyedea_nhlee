#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 0;
	puts("It is the hello_branch");
    if(argc == 1)
    	puts("Not enough arguments");

    else {
    	printf("argc = %d\n", argc);

        for(i=0; i < argc-1; i++)
		   	printf("%s\n", argv[i+1]);
    }

	return 0;
}

