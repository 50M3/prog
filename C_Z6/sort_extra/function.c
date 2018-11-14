//  ***********************************************************************************************************
//  Name            : function.c
//  Autor           : Florian Liehr
//  Datum           : 14.11.2018
//  Version         : 1.0
//  Beschreibung    : Funktionen die Zahlenbereiche Generieren, Arrays ausgeben und der Selection Sort
//  ***********************************************************************************************************
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
/**********************************************
 *                                            *
 * Eine Funktion die Randomzahlen in einem    *
 * definierten Bereich erzeugt                *
 *                                            *
 **********************************************/
int random(int bereich){
    return rand() % 100;
}
/***********************************************
 *                                             *
 * Eine Funktion die den erstellten Array      *
 * in printf ausgibt!                          *
 *                                             *
 ***********************************************/
void print_array(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("% 4d: % 9d\n", i, array[i]);
    }
}
/************************************************
 *                                              *
 * Eine Funktion die je nach Auswahl der Order  *
 * die Zahlen in einem Array sortiert.          *
 *                                              *
 ************************************************/
void selection_sort(int array[], int size, int order){
    int position, kopie;
    for (int i = 0; i < size; i++){
        position = i;
        if (order == 1){

            // Aufsteigende Sortierung
            for (int k = i + 1; k < size; ++k){
                // Suche kleine Zahl
                if (array[position] > array[k])
                    position = k;
            }

            if (position != i){

                // Tausche position mit kleinster Zahl
                kopie = array[i];
                array[i] = array[position];
                array[position] = kopie;
            }
        }
        else if (order == 0){
            // Absteigende Sortierung
            for (int k = i +1; k < size; ++k){
                // Suche größte Zahl
                if (array[position] < array[k])
                    position = k;
            }

            if (position != 1) {
                // Tausche position mit größter Nummer
                kopie = array[i];
                array[i] = array[position];
                array[position] = kopie;
            }
        }
    }
}
/************************************************
 *                                              *
 * Eine Funktion die bevor der eigentliche      *
 * Algorithmus beginnt falsche Eingaben         *
 * kontrolliert und abfängt.                    *
 *                                              *
 ************************************************/
int errorcheck(int size, int bereich, int sort){
    char error = 0;
    if (size > 1000 || size < 0)
        error = 1;

    if (bereich <= 0)
        error = 1;

    if (sort < 0 || sort > 1)
        error = 1;

    if (error){
        printf("Falsche Eingabe!\n");
        exit(-1);
    }
}