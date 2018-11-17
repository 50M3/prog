//  ***********************************************************************************************************
//  Name            : main.c
//  Autor           : Florian Liehr
//  Datum           : 14.11.2018
//  Version         : 1.0
//  Beschreibung    : Array Sortierung mit dem Selection Sort Algorithmus
//  ***********************************************************************************************************

// PREDEFINE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include "function.h"
// MAX VALUE >0 & <1000 wählen.
#define MAX_VALUE 100
// BEREICH >0 wählen.
#define BEREICH 100
// 0 = Absteigend 1 = Aufsteigend
#define SORT 0

/******************************************************
 *                                                    *
 * Die Main Funktion die den Array erstellt           *
 * Und diesen mit hilfe der random Funktion mit       *
 * Zahlen füllt.                                      *
 *                                                    *
 * Außerdem wird die Unsortierte und Sortierte Liste  *
 * ausgegeben, sowie die selection_sort Funktion      *
 * aufgerufen.                                        *
 *                                                    *
 ******************************************************/
int main() {

    // PRE-ERROR CHECK
    errorcheck(MAX_VALUE, BEREICH, SORT);

    // CREATE ARRAY
    int array[MAX_VALUE] = {0};
    // FILL ARRAY
    for(int i = 0; i < MAX_VALUE; i++){
        array[i] = random(BEREICH);
    }

    // PRINTF UNSORTED LIST
    printf("UNSORTIERTE LISTE\n");
    print_array(array,MAX_VALUE);
    printf("\n\n");

    // SORTIERUNG
    selection_sort(array, MAX_VALUE, SORT);

    // PRINTF SORTED LIST
    printf("SORTIERTE LISTE\n");
    print_array(array, MAX_VALUE);

    return 0;
}
