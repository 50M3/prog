#include <stdio.h>

void ausgabe(); // Initialisierung der Ausgabe
int ggt(int a, int b); // Initialisierung der ggt Funktion

int main() {
    ausgabe();

    getchar();
    return 0;
}

void ausgabe(){
    int a = 0; // 0 da a noch keinen Wert haben soll
    int b = 0; // 0 da b noch keinen Wert haben soll

    printf("Berechnung des ggT von 2 natuerlichen Zahlen: \n");
    printf("Zahl 1:\n");
    scanf("%u", &a); //Scan der Eingabe und in a schreiben
    getchar();
    printf("Zahl 2:\n"); // Scan der Eingabe und in b schreiben
    scanf("%u", &b);
    getchar();

    if (a < 0 || b < 0) { // Abfrage ob a oder b kleiner Null
        printf("Keine gueltige natuerliche Zahl");
    }
    else if (a == 0) { // Abfrage ob a 0
        printf("Der ggT ist: %d", b); // Ausgabe von b

    }
    else if (b == 0) { // Abfrage von b 0
        printf("Der ggT ist: %d", a); // Ausgabe von a
    }
    else {
        printf("Der ggT von %d & %d ist: %d", a,b, ggt(a,b));
    }

}

int ggt(int a, int b) {
    int max = 0; // Max Wert = groester Wert
    int min = 0; // Min Wert = kleinster Wert
    int rest = 0; // Modulo Rest

    if (a < b) { // Abfrage ob a kleiner b ist
        max = b;  // Schreibe max  = Wert von b
        min = a; // Schreobe min = Wert von a
    }
    else if (a > b) { // Abfrage ob a > b
        max = a; // Schreibe max = Wert von a
        min = b; // Schreibe min = Wert von b
    }
    else
        return a;

    do {
            rest = max % min; // Rest errechnet durch groester Wert / kleinster Wert
            max = min; // Setze max zu min
            min = rest; // und min wird der neue Rest
        } while (rest != 0); //Mache die Schleife solange wie der Rest ungleich 0 ist
        return max; // Gib als Wert den finalen ggT zurueck
}
