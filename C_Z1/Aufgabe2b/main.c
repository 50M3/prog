// ============================================================
//
// Author: Florian Liehr
// Datum: 03.10.2018
// Uhrzeit: 17.42 Uhr
// ==== BEZUG ====
//
// Übungszettel Nr. 1
// Aufgabe 2b
//
// ============================================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i=0, vorzeichen=-1;
  double reihe, summe=0;

  while (i<1000){
    i = i+1;
    reihe = 1.0/i;
    vorzeichen = -vorzeichen;
    summe = summe + vorzeichen*reihe;
  }
  printf("Die Summe ist %f\n", summe);
  return 0;
}

