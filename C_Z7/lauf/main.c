#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void compress(char *string, int length);

int main() {
    char string[255];
    printf("String:\n");
    scanf("%[^\n]", string);
    getchar();
    int length = strlen(string);

    printf("Iput: %s\n", string);
    printf("Length: %d\n", length);

    compress(string, length);

    getchar();
    return 0;
}

void compress(char *string, int length){
    int j = 0;
    int count = 0;

    while(j < length){

        while(string[j] == string[j+1]) {
            count++;
            j++;
        }
        if(count <= 1){
            printf("%c", string[j]);
        } else if(count > 1) {
            printf("%c%d", string[j], count + 1);
        }
        count = 0;
        j++;
    }

}