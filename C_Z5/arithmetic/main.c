//  ***********************************************************************************************************
//  Name            : main.c
//  Autor           : Florian Liehr
//  Datum           : 06.11.2018
//  Version         : 1.4
//  Beschreibung    : Ein Programm was den Minimum, Maximum, Mittelwert & Abweichung von
//                    Random Zahlen berechnet.
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include "function.h"

// PREDEFINE BLOCK
#define MAX_COUNT 100000

void arithmetic();

// MAIN FUNCTION
int main() {
    arithmetic();
    getchar();
    return 0;
};

/* *********************************************************
 * Generiert aus einem MAX_COUNT Wert einen Array.         *
 * Gibt alle printf für die  Minimum, Maximum, Mittelwerte *
 * und die Abweichung aus.                                 *
 * *********************************************************/
void arithmetic(){
    // CREATE ARRAY
    float zaehler[MAX_COUNT] = {0};
    // FILL ARRAY
    for(int i = 0; i < MAX_COUNT; i++) {
        zaehler[i] = random();
    };
    // PRINTF BLOCK
    printf("Max %f\n", get_max(zaehler, MAX_COUNT));
    printf("Min %f\n", get_min(zaehler, MAX_COUNT));
    printf("Mittelwert %f\n", get_mittelwert(zaehler, MAX_COUNT));
    printf("Abweichung %f\n", get_abweichung(zaehler, MAX_COUNT));
};