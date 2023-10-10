#include <stdio.h>
#include <string.h>
#include "copy.h"

int main(){
	int len;
	int max;
	char strings[5][MAXLINE];

	for(len = 0; len < 5; len++){
		gets(strings[len]);
	}
	for(len = 0; len < 4; len++){
		for(max = len + 1; max < 5; max++){
			if(strlen(strings[len]) < strlen(strings[max])){
				char temp[MAXLINE];
				strcpy(temp, strings[len]);
				strcpy(strings[len], strings[max]);
				strcpy(strings[max], temp);
			}
		}
	}
	for(len = 0; len < 5; len++){
		printf("%s \n", strings[len]);
	}
	return 0;
}
