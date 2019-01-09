//  ***********************************************************************************************************
//  Name            : main.c
//  Autor           : Florian Liehr
//  Datum           : 04.12.2018
//  Version         : 1.4
//  Beschreibung    : Matrix mit structs, sowie transponieren der Matrix
//  ***********************************************************************************************************

// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// PREDEFINE BLOCK
void ausgabe();
struct matrix neue_matrix (int n, int m);
void init_rand_matrix(struct matrix structure);
void print_matrix(struct matrix structure);

struct matrix matrix_transpose (struct matrix structure);
void matrix_del(struct matrix structure);

// AUFGABE 1
void save_struct(struct matrix structure);
struct matrix read_struct();

// MATRIX STRUCT
struct matrix{
    int zeile;
    int spalte;
    double *matrix;
};

// MAIN FUNCTION
int main() {
    ausgabe();
    return 0;
}

/******************************************************
 *                                                    *
 * Eine Funktion die alle Ausgaben für die erste      *
 * und zweite Aufgabe tätigt.                         *
 *                                                    *
 ******************************************************/
void ausgabe(){
    /*int zeile = 0, spalte = 0;
    printf("Geben Sie die Anzahl der Zeilen ein:\n");
    scanf("%d", &zeile);

    printf("Geben Sie die Anzahl der Spalten ein:\n");
    scanf("%d", &spalte);

    // ERROR CHECK
    if (zeile <= 0 || zeile > 10 || spalte <= 0 || spalte > 8)
        exit(-1);

    // PREPARE STRUCT
    struct matrix structure = neue_matrix(zeile, spalte);

    // INIT STRUCT
    init_rand_matrix(structure);

    save_struct(structure);*/
    struct matrix structure = read_struct();


    // PRINT STRUCT
    printf("Aufgabe 1\n");
    print_matrix(structure);
    printf("\n");


    // TRANSPOSE STRUCT
    struct matrix transpose = matrix_transpose(structure);

    // PRINT TRANSPOSE STRUCT
    printf("Aufgabe 2\n");
    print_matrix(transpose);

    // FREE MEMORY
    matrix_del(structure);
    printf("SPEICHER WIEDER FREI GEGEBEN!\n\n");

    getchar();
}

/******************************************************
 *                                                    *
 * NEUE MATRIX GENERIERT EINEN STRUCT UND RESERVIERT  *
 * DEN BENÖTIGTEN MEMORY!                             *
 *                                                    *
 ******************************************************/
struct matrix neue_matrix(int n, int m){
    struct matrix structure;
    structure.zeile = n;
    structure.spalte = m;

    structure.matrix = (double*)malloc((n*m) * sizeof(double));

    return structure;
}

/******************************************************
 *                                                    *
 * INIT_RAND_MATRIX GENERIERT ZUFALLSZAHLEN           *
 * FÜR DIE NEUE MATRIX UND FÜLLT DIESE                *
 *                                                    *
 ******************************************************/
void init_rand_matrix(struct matrix structure){

    // SEED
    srand(time(NULL));

    for (int i = 0; i < (structure.zeile * structure.spalte); i++){
        structure.matrix[i] = (rand() / (double)RAND_MAX);
    }
}

/******************************************************
 *                                                    *
 * PRINT_MATRIX GIBT DIE MATRIX AUF DER KONSOLE AUS   *
 *                                                    *
 ******************************************************/
void print_matrix(struct matrix structure){

    printf("Spalten:   ");
    for (int i = 1; i <= structure.spalte; i++) {
        printf("Spalte %d   ", i);
    }
    printf("\n");
    for (int i = 0; i < structure.zeile; i++){
        printf("Zeile  %d   ", i+1);

        for (int j = 0; j < structure.spalte; j++){
            printf("%f   ", structure.matrix[((i * structure.spalte) + j)]);
        }
        printf("\n");
    }
}

/******************************************************
 *                                                    *
 * MATRIX_TRANSPOSE TRANSPONDIERT DIE MATRIX UND GIBT *
 * DIESE ALS NEUES STRUCT ZURÜCK                      *
 *                                                    *
 ******************************************************/
struct matrix matrix_transpose(struct matrix structure){
    // PREPARE NEW STRUCT
    struct matrix transpose;

    // TAUSCHE VALUES
    transpose.spalte = structure.zeile;
    transpose.zeile = structure.spalte;

    // GET MEMORY
    transpose.matrix = (double*)malloc(transpose.spalte*transpose.zeile * sizeof(double));

    // TRANSPOSE MATRIX
    for (int i = 0; i < structure.zeile; i++){
        for (int j = 0; j < structure.spalte; j++){
            transpose.matrix[((j * structure.zeile)+i)] = structure.matrix[((i * structure.spalte)+j)];
        }
    }

    return transpose;
}
/******************************************************
 *                                                    *
 * MATRIX_DEL GIBT DEN MEMORY FREI UND SETZT ZEILE    *
 * UND SPALTEN WIEDER AUF 0                           *
 *                                                    *
 ******************************************************/
void matrix_del(struct matrix structure){
    free(structure.matrix);
    structure.zeile = 0;
    structure.spalte = 0;
}

void save_struct(struct matrix structure){
    {
        //OPEN FILE
        FILE *fp;
        fp = fopen("struct.txt", "w");
        if (fp == NULL)
        {
            //ERROR CHECK
            printf("Datei Fehler!");
        }
        else
        {
            //WRITE IN FILE
            fwrite(&structure.spalte, sizeof(int), 1, fp);
            fwrite(&structure.zeile, sizeof(int), 1, fp);
            fwrite(structure.matrix, sizeof(double), structure.spalte * structure.zeile, fp);
        }
        //CLOSE
        fclose(fp);
    }

}

struct matrix read_struct()
{
    //OPEN FILE
    struct matrix structure;
    FILE *fp;
    fp = fopen("struct.txt", "r");
    if (fp == NULL)
    {
        //ERROR CHECK
        printf("Datei Fehler!");
    }
    else
    {
        //READ FROM FILE
        fread(&structure.spalte, sizeof(int), 1, fp);
        fread(&structure.zeile, sizeof(int), 1, fp);
        structure.matrix = (double*)calloc((structure.zeile * structure.spalte), sizeof(double));


        fread(structure.matrix, sizeof(double), structure.zeile * structure.spalte, fp);
    }

    //CLOSE AND RETURN
    fclose(fp);
    return structure;
}




