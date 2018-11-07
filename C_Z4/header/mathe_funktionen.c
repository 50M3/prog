//  ***********************************************************************************************************
//  Name            : mathe_funktionen.c
//  Author          : Florian Liehr
//  Datum           : 26.11.2018
//  Version         : 1.0
//  Copyright       : Creative Commons BY NC SA, 2018, Fachhochschule Suedwestfalen
//  Beschreibung    : Fakultaet Funktion
//  ***********************************************************************************************************
long long fakultaet(int n) {

    long long calc = 1;

    if (n == 0) {
        return 1;
    }
    else
        for (int i = 1; i <= n; i++) {
            calc *= i;
        };

    return calc;
}
