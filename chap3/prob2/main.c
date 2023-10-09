#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char strings[5][MAX_LENGTH];
    int i, j;

    for (i = 0; i < 5; i++) {
        gets(strings[i]);
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strlen(strings[i]) < strlen(strings[j])) {
                char temp[MAX_LENGTH];
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

