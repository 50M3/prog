// ============================================================
//
// Author: Florian Liehr
// Datum: 03.10.2018
// Uhrzeit: 19.10 Uhr
// ==== BEZUG ====
//
// Übungszettel Nr. 1
// Aufgabe 2c
//
// ============================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double summe = 0, i;
    int vorzeichen = -1;

    for (i = 1; i <=1000; i++){
        vorzeichen = -vorzeichen; // Für das Vorzeichenwechseln
        summe = summe + vorzeichen*(1 / (2*i - 1));
    }
    printf("Die Summe ist %f\n", summe);
    return 0;
}
