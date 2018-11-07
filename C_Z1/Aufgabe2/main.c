// ============================================================
//
// Author: Florian Liehr
// Datum: 03.10.2018
// Uhrzeit: 17.11 Uhr
// ==== BEZUG ====
//
// Übungszettel Nr. 1
// Aufgabe 2a
//
// ============================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double summe = 0, i;

    for (i = 1; i <= 1000; i++){
        summe = summe + (1/i);
    }
    printf("Die Summe ist %f\n", summe);
    return 0;
}
