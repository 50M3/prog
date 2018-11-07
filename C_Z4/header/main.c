//  ***********************************************************************************************************
//  Name            : main.c
//  Author          : Florian Liehr
//  Datum           : 26.11.2018
//  Version         : 1.0
//  Copyright       : Creative Commons BY NC SA, 2018, Fachhochschule Suedwestfalen
//  Beschreibung    : Fakultaet
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include "mathe_funktionen.h"

//MAIN FUNCTION
int main() {
    int n = 15;
    printf("Die Fakultaet von %d ist: %lld\n", n, fakultaet(n));
    return 0;
}