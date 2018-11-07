#include <stdio.h>

int fakultaet(int n);
int binomial(int n, int k);

int main() {
    int max_n = 5; // Laenge des Pascalschen Dreiecks
    int n,k;

    for (n = 0; n <= max_n; n++) { //Schleife die n zaehlt
        for (k = 0; k <= n; k++) { // Schleife die k zaehlt
            printf("%d ", binomial(n,k)); //Ausgabe der Reihe des Pascalschen Dreiecks
        }

    }
    getchar();
    return 0;
}

int fakultaet(int n) { // Fakultaets Funktion

    int calc = 1; // 1 da ich mit 1 anfange zu zaehlen

    if (n == 0) { // Abfrage wenn n = 0 soll er 1 return geben
        return 1;
    }
    else
        for (int i = 1; i <= n; i++) { // Berechnung der Fakultaet
            calc *= i; // Solange wie i < n ist, rechne die Fakultaet
        };

    return calc; // Returne am Ende den Wert von calc
}

int binomial(int n, int k) { // Funktion des Bionomialkoeffizienten
    return fakultaet(n) / (fakultaet(k)*fakultaet(n-k)); // Formel des Binomialkoeffizienten
}

