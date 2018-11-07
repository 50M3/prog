//  ***********************************************************************************************************
//  Name            : function.c
//  Autor           : Florian Liehr
//  Datum           : 06.11.2018
//  Version         : 1.0
//  Beschreibung    : Mathematische Funktionen zum Berechnen von Maximum, Minimum, Mittelwert und
//                    der Abweichung
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include "function.h"
#include <stdlib.h>

/********************************************
 * Baut Random Zahlen im Bereich 0.0 - 10.0 *
 * ******************************************/
float random(){
    return (rand() / (float)RAND_MAX) * 10;
};

/* ************************************************
 * Errechnet den MAX Wert vom beschriebenen Array *
 * ************************************************/

float get_max(float zaehler[], int size){
    float max = zaehler[0];

    for(int c = 1; c < size; c++) {
        if( max <  zaehler[c])
            max =  zaehler[c];
    };
    return max;
};

/* ************************************************
 * Errechnet den MIN Wert vom beschriebenen Array *
 * ************************************************/

float get_min(float zaehler[], int size) {
    float min = zaehler[0];

    for(int c = 1; c < size; c++) {
        if( min > zaehler[c])
            min = zaehler[c];
    };
    return min;
};

/* **************************************************
 * Errechnet den Mittelwert vom beschriebenen Array *
 * **************************************************/

float get_mittelwert(float zaehler[], int size) {
    float summe = 0;

    for (int c = 0; c < size; c++) {
        summe += zaehler[c];
    };
    return summe / size;
};

/* **************************************************
 * Errechnet die Abweichung vom beschriebenen Array *
 * **************************************************/

float get_abweichung(float zaehler[], int size) {
    float mittelwert = get_mittelwert(zaehler, size);
    float summe = 0;

    for (int c = 0; c < size; c++) {
        float calc = 0;
        calc = * (zaehler+c) - mittelwert;

        if (calc < 0)
            calc *= -1;

        summe += calc;
    };

    return ((1 / (float)size) * summe);
}