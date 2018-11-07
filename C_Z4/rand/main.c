//  ***********************************************************************************************************
//  Name            : main.c
//  Author          : Florian Liehr
//  Datum           : 26.11.2018
//  Version         : 1.0
//  Copyright       : Creative Commons BY NC SA, 2018, Fachhochschule Suedwestfalen
//  Beschreibung    : RND analyzing
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PREDEFINE FUNCTION
void ausgabe();

// MAIN FUNCTION
int main() {

    ausgabe();
    getchar();
    return 0;
}

// RANDOM FUNCTION
/******************************************************
 * Eine Funktion die eine eingegebene Anzahl an       *
 * Random generierten Zahlen in 10 Arrays abspeichert *
 * und in Prozent ausgibt                             *
 ******************************************************/
void ausgabe(){

    // COUNT
    int max_anzahl = 0;
    printf("Geben Sie die Anzahl der Durchlaufe an:\n");
    scanf("%d", &max_anzahl);
    getchar();


    // ERROR CHECK
    if (max_anzahl <= 0) {
        printf("ERROR\nGeben Sie eine Zahl > 0 ein");
    }
    else {

        // CREATE ARRAY
        double zaehler[10] = {0};

        //PREPARE
        srand(time(NULL));

        // ANALYZING
        for (int i = 0; i <= max_anzahl; i++) {
            int random = rand() % 100;
            zaehler[(random / 10)] = zaehler[(random / 10)] + 1;
        }

        // PRINT BLOCK
        for (int k = 0; k < 10; k++) {
            printf("zaehler[%d] --> %.2f %%\n", k, (zaehler[k] * 100) / max_anzahl);
        }
    }
}