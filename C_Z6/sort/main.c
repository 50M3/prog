//  ***********************************************************************************************************
//  Name            : main.c
//  Autor           : Florian Liehr
//  Datum           : 13.11.2018
//  Version         : 1.3
//  Beschreibung    : Array Sortierung mit dem Selection Sort Algorithmus
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#define MAX_VALUE 1000

//PREDEFIN BLOCK
void ausgabe();
int rnd_int(int bereich);
void selection_sort(int size, int random[], int order);
void print_array(int size, int random[]);

// MAIN FUNCTION
int main() {
    ausgabe();
    getchar();
    return 0;
}

/******************************************************
 *                                                    *
 * Eine Funktion die alle Eingaben checkt und den     *
 * Array erstellt und füllt!                          *
 *                                                    *
 ******************************************************/
void ausgabe(){

    // INIT
    char error = 0;
    //int count = 0;
    int bereich = 0;
    int order = 0;

    // EINGABEN
    /*printf("Geben Sie die Anzahl der Durchlaeufe ein(0-2000:\n");
    scanf("%d", &count);
    getchar();*/

    printf("Geben Sie den Zahlenbereich ein:\n");
    scanf("%d", &bereich);
    getchar();

    printf("Sortierung(1: Aufsteigend | 0: Absteigend):\n");
    scanf("%d", &order);
    getchar();

    // ERROR CHECK
    /*if (count > 2000 || count < 1)
        error = 1;*/

    if (bereich <= 0)
        error = 1;

    if (order < 0 || order > 1)
        error = 1;

    // ERROR ABORT
    if (error){
        printf("Falsche Eingabe!\n");
        return;
    }

    // CREATE ARRAY
    //int *random = malloc(count * sizeof(int));
    int random[MAX_VALUE] = {0};

    // FILL ARRAY
    for (int i = 0; i < MAX_VALUE; i++){
        random[i] = rnd_int(bereich);
    }

    // PRINTF UNSORTIERTE LISTE
    printf("**UNSORTIERT**\n");
    print_array(MAX_VALUE, random);
    printf("\n\n");

    // SORTIERUNG
    selection_sort(MAX_VALUE, random, order);

    // PRINTF SORTIERTE LISTE
    printf("**SORTIERT**\n");
    print_array(MAX_VALUE, random);
}

/**********************************************
 *                                            *
 * Eine Funktion die Randomzahlen in einem    *
 * definierten Bereich erzeugt                *
 *                                            *
 **********************************************/
int rnd_int(int bereich){
    return (rand() % bereich);
}

/***********************************************
 *                                             *
 * Eine Funktion die den erstellten Array      *
 * in printf ausgibt!                          *
 *                                             *
 ***********************************************/
void print_array(int size, int random[]){
    for (int i = 0; i < size; i++) {
        printf("% 4d: % 9d\n", i, random[i]);
    }
}

/************************************************
 *                                              *
 * Eine Funktion die je nach Auswahl der Order  *
 * die Zahlen in einem Array sortiert.          *
 *                                              *
 ************************************************/
void selection_sort(int size, int random[], int order){
    int position, kopie;
    for (int i = 0; i < size; i++){
        position = i;
        if (order == 1){

            // Aufsteigende Sortierung
            for (int k = i + 1; k < size; ++k){
                // Suche kleine Zahl
                if (random[position] > random[k])
                    position = k;
            }

            if (position != i){

                // Tausche position mit kleinster Zahl
                kopie = random[i];
                random[i] = random[position];
                random[position] = kopie;
            }
        }
        else if (order == 0){
            // Absteigende Sortierung
            for (int k = i +1; k < size; ++k){
                // Suche größte Zahl
                if (random[position] < random[k])
                    position = k;
            }

            if (position != 1) {
                // Tausche position mit größter Nummer
                kopie = random[i];
                random[i] = random[position];
                random[position] = kopie;
            }
        }
    }
}