//  ***********************************************************************************************************
//  Name            : main.c
//  Author          : Florian Liehr
//  Datum           : 01.11.2018
//  Version         : 1.3
//  Beschreibung    : Taschenrechner (+,-,*,/)
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include "function.h"


// MAIN FUNCTION
int main() {
    printf("**************Calculator**************\n");
    printf("======================================\n");
    printf("SCHEMA:<operator> <operation> <opeator>\n");
    calc();
    getchar();
    return 0;
}

/* ******************************************************************
 *                    TASCHENRECHNER FUNKTION                       *
 *                                                                  *
 * Eine Function die das Grundgeruest eines Taschenrechners baut    *
 * und die Eingaben in l_operator, operation und r_operator         *
 * speichert und an einfache Funktionen weiter gibt.                *
 * Außerdem gibt es einige Error Checks.                            *
 * ******************************************************************/
void calc() {
    char run = 1;

    // MAIN LOOP
    while(run) {

        char error = 0;

        // START
        float l_operator = 0;
        float r_operator = 0;
        char operation = 0;

        // GET OPERATOR AND OPERATION
        printf("Geben Sie ihre Rechnung ein(+ - * /: \n");
        scanf("%f", &l_operator);
        scanf(" %c", &operation);
        scanf(" %f", &r_operator);
        getchar();

        // ERROR CHECK OPERATION
        if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
            error = 1;


        // OPERATION SWITCH AND CALCULATION
        switch(operation) {
            case '+':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, addition(l_operator, r_operator));
                break;
            case '-':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, subtraktion(l_operator, r_operator));
                break;
            case '*':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, multiplikation(l_operator, r_operator));
                break;
            case '/':
                if (r_operator == 0)
                    error = 1;
                else
                    printf("%f %c %f = %f\n", l_operator, operation, r_operator, division(l_operator, r_operator));
                break;
        }

        // ERROR ABORT
        if (error) {
            printf("Keine gueltige Eingabe. ERROR\n");
            return;
        }

        // EXIT CHECK
        char exit = 'y';

        printf("Weitere Operationen? y/n \n");
        scanf("%c", &exit);
        getchar();

        if (exit == 'y')
            run = 1;
        else if (exit == 'n') {
            printf("Danke fuer die Nutzung!");
            run = 0;
        }
        else
            run = 1;

        printf("\n");

    }
}