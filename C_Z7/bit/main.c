//  ***********************************************************************************************************
//  Name            : main.c
//  Autor           : Florian Liehr
//  Datum           : 17.11.2018
//  Version         : 1.2
//  Beschreibung    : Bit an einer bestimmten Stelle herausfinden.
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// PREDEFINE BLOCK
int errorcheck(int stelle);
int bit_an_stelle(int zahl, int stelle);

/**********************************************
 *                                            *
 *             MAIN FUNCTION                  *
 * Erstellt die Variablen zahl und stelle     *
 * und füllt diese per scanf auf.             *
 *                                            *
 **********************************************/
int main() {
    int zahl = 0;
    int stelle = 0;

    printf("WICHTIG: Bitte geben Sie keine Zahl groesser als 2Mrd ein!\n");
    printf("Bitte waehlen Sie eine Stelle zwischen 0 und 31\n\n");

    printf("Geben Sie eine Zahl ein:\n");
    scanf("%d", &zahl);

    printf("Geben Sie eine Stelle an:\n");
    scanf("%d", &stelle);

    errorcheck(stelle);

    printf("Bit an Stelle [%d] von der Zahl[%d] ist [%d]",stelle, zahl, bit_an_stelle(zahl, stelle));

    return 0;
}

/**********************************************
 *                                            *
 *          ERROR CHECK FUNCTION              *
 * Bevor die eigentliche bit_an_stelle        *
 * Funktion aufgerufen wird, wird kontrolliert*
 * ob die Richtige Stelle ausgewählt wird.    *
 *                                            *
 **********************************************/
int errorcheck(int stelle){
    if (stelle < 0 || stelle > 31){
        printf("ERROR!");
        exit(-1);
    }
}

/**********************************************
 *                                            *
 *          BIT AN STELLE FUNKTION            *
 * Man verschiebt die Bits der Zahl um die    *
 * Anzahl der eingegeben Stellen und fragen   *
 * diese Stelle dann ab.                      *
 *                                            *
 **********************************************/
int bit_an_stelle(int zahl, int stelle){
    // ZAHL UM STELLE VERSCHIEBEN UND BESITZEN MAXIMAL DIE ZAHLEN 0 UND 1
    return((zahl >> stelle) & 1);
}