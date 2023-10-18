#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXLINE 80

int main(int argc, char *argv[]){
    FILE *fp;
    int c;
	int i;
	
	int line = 0;
	char buffer[MAXLINE];

	if (strcmp(argv[1], "-n") == 0){	
        line++;
		printf("%d ", line);
		
		if(argc < 2)
			fp = stdin;
		else
			fp = fopen(argv[2], "r");

		c = getc(fp);

		while(c != EOF){
			fputc(c, stdout);
			c = fgetc(fp);
		}

		fclose(fp);
	}
	else{
		for(i = 1; i < argc; i++){
			
			if(argc < 2)
				fp = stdin;
       		else
				fp = fopen(argv[i],"r");

       		c = getc(fp);

        	while(c != EOF){
             	  fputc(c, stdout);
			  	 c = fgetc(fp);
   			}

       		fclose(fp);
		}
	}
	
	return 0;
}
