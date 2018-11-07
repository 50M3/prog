#include <stdio.h>

int main() {
    int zeilen = 32;
    int spalte = 4;

    printf("*** ASCII Tabelle ***\n");
    printf("Okt Dez Hex Zch | Okt Dez Hex Zch | Okt Dez Hex Zch | Okt Dez Hex Zch\n");
    printf("---------------------------------------------------------------------\n");

    for (int i = 0; i < zeilen; i++) {
        for (int k = 0; k < spalte; k++) {

            if (i + k*zeilen < zeilen || i + k*zeilen == 127) {
                printf("%03o %03d %03x ...  |  ", i,i,i);
            } else {
                printf("%03o %03d %03x %c  |  ", i+zeilen*k, i+zeilen*k, i+zeilen*k, i+zeilen*k);
            }
        }
        printf("\n");
    }
    getchar();
    return 0;
}