//  ***********************************************************************************************************
//  Name            : main.c
//  Autor           : Florian Liehr
//  Datum           : 17.11.2018
//  Version         : 1.2
//  Beschreibung    : Run-Length Encoding
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PREDEFINE BLOCK
#define MAX_VALUE 255
int errorcheck(int length);
void compress(char *string, int length);

/**********************************************
 *                                            *
 *             MAIN FUNCTION                  *
 * Erstellt den String und gibt diesen an den *
 * Compression Algorithmus weiter.            *
 *                                            *
 **********************************************/
int main() {

    // CREATE ARRAY
    char string[MAX_VALUE];

    // FILL ARRAY WITH STRING
    printf("String:\n");
    scanf("%[^\n]", string);

    // LENGTH OF STRING BY strlen function
    int length = strlen(string);

    // ERRORCHECK IF INPUT IS LEGAL
    errorcheck(length);

    // PRINTF BLOCK
    printf("Iput: %s\n", string);
    printf("String length: %d\n", length);

    // STRING COMPRESSION
    printf("Output: ");
    compress(string, length);

    return 0;
}
/**********************************************
 *                                            *
 *           COMPRESS FUNCTION                *
 * Erstellt durch einlesen des Strings und    *
 * seiner Länge einen komprimierten String    *
 * durch die Nutzung der Lauflängenkodierung  *
 *                                            *
 **********************************************/

void compress(char *string, int length){
    int j = 0;
    int count = 0;

        while (j < length) {
            if(string[j] == '\0')
                return;

            while (string[j] == string[j+1]) {
                count++;
                j++;
            }
            if (count < 1) {
                printf("%c", string[j]);
            } else if (count >= 1) {
                printf("%c%d", string[j], count+1);

            }
            count = 0;
            j++;
        }
}

/**********************************************
 *                                            *
 *           ERRORCHECK FUNCTION              *
 * Es wird checkt ob die Länge des Strings    *
 * größer der Größe des Arrays ist und ob     *
 * eine leere Eingabe getätigt wurde.         *
 *                                            *
 **********************************************/
int errorcheck(int length){
    if (length > MAX_VALUE || length == 0){
        printf("Wrong length! EXIT");
        exit(-1);
    }
}
