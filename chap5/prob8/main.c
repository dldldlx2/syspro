#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char filename[100];
    int line_number;

    FILE *file = fopen("test.txt", "r");
    if(file == NULL){
        perror("File Open Error\n");
        return 1;
    }
    char line[256];
    int line_count = 0;
    int current_line = 1;
    int found = 0;
 
    while(fgets(line, sizeof(line), file)){
	line_count++;
    }

    printf("Total line : %d\n", line_count);

    printf("You can choose 1 ~ %d Line\n", line_count);
    printf("Pls 'Enter' the line to select : ");
    scanf("%d", &line_number);

    fseek(file, 0, SEEK_SET);

    while(fgets(line, sizeof(line), file)){
        if(current_line == line_number){
            printf("%s", line);

            found = 1;
            break;
        }
        current_line++;
    }

    if(!found){
        printf("해당 줄을 찾을 수 없습니다.\n");
    }

    fclose(file);
    return 0;
}
