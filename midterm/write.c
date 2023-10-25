#include <stdio.h>
#define MAXLINE 100

int main(int argc, char *argv[]){
    FILE *fp;
    int c;
	int len;
	char line[MAXLINE];

    if(argc < 2)
        fp = stdin;
    else fp = fopen(argv[1],"r");

	while(gets(line) != NULL){
		len = strlen(line);
	}
    while(c != EOF){
        putc(c, stdout);
		c = getc(fp);
    }
	printf("%s \n", line);
    fclose(fp);
    return 0;
}
