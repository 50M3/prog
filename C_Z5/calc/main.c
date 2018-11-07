//  ***********************************************************************************************************
//  Name            : main.c
//  Author          : Florian Liehr
//  Datum           : 01.11.2018
//  Version         : 1.0
//  Copyright       : Creative Commons BY NC SA, 2018, Fachhochschule Suedwestfalen
//  Beschreibung    : Taschenrechner (+,-,*,/)
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>

// PREDEFINE FUNCTIONS
void calc();


// MAIN FUNCTION
int main() {
    printf("**************Calculator**************\n");
    printf("======================================\n");
    printf("SCHEMA:<operator> <operation> <opeator>\n");
    calc();
    getchar();
    return 0;
}

// CALCULATOR FUNCTION
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

        // ERROR ABORT
        if (error) {
            printf("Keine gueltige Eingabe. ERROR\n");
            getchar();
            return;
        }

        // OPERATION SWITCH AND CALCULATION
        switch(operation) {
            case '+':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, l_operator+r_operator);
                break;
            case '-':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, l_operator-r_operator);
                break;
            case '*':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, l_operator*r_operator);
                break;
            case '/':
                printf("%f %c %f = %f\n", l_operator, operation, r_operator, l_operator/r_operator);
                break;
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