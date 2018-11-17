#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_VALUE 255
void compress(char *string, int length);
int errorcheck(int length);

int main() {
    char string[MAX_VALUE];
    printf("String:\n");
    scanf("%[^\n]", string);
    getchar();
    int length = strlen(string);
    errorcheck(length);

    printf("Iput: %s\n", string);
    printf("Length: %d\n", length);

    compress(string, length);

    getchar();
    return 0;
}

void compress(char *string, int length){
    int j = 0;
    int count = 0;

        while (j < length) {

            while (string[j] == string[j + 1]) {
                count++;
                j++;
            }
            if (count < 1) {
                printf("%c", string[j]);
            } else if (count >= 1) {
                printf("%c%d", string[j], count + 1);
            }
            count = 0;
            j++;
        }
}

int errorcheck(int length){
    if (length > MAX_VALUE || length == 0){
        printf("Wrong length! EXIT");
        exit(-1);
    }
}
