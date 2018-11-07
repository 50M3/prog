// ============================================================
//
// Author: Florian Liehr
// Datum: 03.10.2018
// Uhrzeit: 19.29 Uhr
// ==== BEZUG ====
//
// Übungszettel Nr. 1
// Aufgabe 2d
//
// ============================================================
#include <stdio.h>
#include <stdlib.h>
#include <math.h> //Für pow

int main()
{
    double summe=0, i;

    for (i=0; i <= 1000; i++){
        summe = summe + (1 / (pow(2.0, i))); // Quadrieren in einfach.
    }
    printf("Die Summe ist %f\n", summe);
    return 0;
}
