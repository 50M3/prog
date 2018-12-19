//  ===========================================================================================================
//  Name        : main.c
//  Author      : Florian Liehr
//  Datum       : 14.12.2018
//  Version     : 1.0
//  Description : Work with connected structs as lists
//  ===========================================================================================================


// INCLUDE BLOCK
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// STRUCTS
typedef struct node{
    int data;
    struct node *prev;
    struct node *next;
} node_t;

// PRE DEFINE
void aufgabe1();
node_t *newNode(int val, node_t *prev, node_t *next);
void listAddElement(node_t *head, int val);
void listDeleteElement(node_t *head, int val);
void listDelete(node_t *head);
void listPrint(node_t *head);
void listPrintReverse(node_t *head);
void listAddElementSorted(node_t *head, int val);


int main()
{
    aufgabe1();
    return 0;
}

void aufgabe1(){
    // INIT
    int run = 1;
    int val = 0;
    int command = 0;
    node_t *head = NULL;

    // MAIN LOOP
    while (run){
        // RESET
        val = 0;
        command = 0;

        // PRINT COMMANDS
        system("CLS");
        if (head == NULL)
            printf("| 1 | Liste erstellen\n");
        else{
            printf("| 1 | Fuege unsortiertes Element an\n");
            printf("| 2 | Fuege sortiertes Element an\n");
            printf("| 3 | Loesche Element\n");
            printf("| 4 | Schreibe Liste\n");
            printf("| 5 | Schreibe Liste umgekehrt\n");
            printf("| 6 | Loesche Liste\n");
            printf("| 7 | Exit\n");
        };

        // GET COMMAND
        printf("Befehl: ");
        scanf("%d", &command);
        getchar();

        system("CLS");

        // ERROR CHECK
        if ((head == NULL && command != 1) || (head != NULL && (command <= 0 || command > 7)))
            continue;

        switch (command){
            case 1:
                if (head == NULL){
                    // CREATE LIST
                    printf("Eingabe des ersten Elements: ");
                    scanf("%d", &val);
                    head = newNode(val, NULL, NULL);
                    printf("Liste erstellt\n");
                }
                else{
                    // ADD ELEMENT UNSORTED
                    listPrint(head);
                    printf("\nEingabe des Elementes: ");
                    scanf("%d", &val);
                    listAddElement(head, val);
                };
                break;
            case 2:
                // ADD ELEMENT SORTED
                listPrint(head);
                printf("\nEingabe des Elementes: ");
                scanf("%d", &val);
                listAddElementSorted(head, val);
                break;
            case 3:
                // DELETE ELEMENT
                listPrint(head);
                printf("\nEingabe des zu loeschenden Elementes: ");
                scanf("%d", &val);
                listDeleteElement(head, val);
                break;
            case 4:
                // PRINT LIST
                listPrint(head);
                break;
            case 5:
                // PRINT LIST REVERSED
                listPrintReverse(head);
                break;
            case 6:
                // DELETE LIST
                listDelete(head);
                head = NULL;
                break;
            case 7:
                // EXIT
                run = 0;
                break;
        };
    };
}

/******************************************************
 *                                                    *
 * newNode generiert eine neue Liste mit dem Typ      *
 * node_t                                             *
 *                                                    *
 ******************************************************/
node_t *newNode(int val, node_t *prev, node_t *next){
    node_t *node = (node_t*)malloc(sizeof(node_t));
    node->data = val;
    node->next = next;
    node->prev = prev;
    return node;
}

/******************************************************
 *                                                    *
 * listAddElement generiert ein neues Element am Ende *
 * vom Struct.                                        *
 *                                                    *
 ******************************************************/
void listAddElement(node_t *head, int val){
    if (head == NULL){
        printf("ERROR: Head is Empty!");
        exit(-1);
    }

    node_t *curr = head;
    while (curr->next){
        curr = curr->next;
    };

    node_t *element = newNode(val, curr, NULL);
    curr->next = element;
}

/******************************************************
 *                                                    *
 * listDelete loescht die komplette Liste             *
 *                                                    *
 ******************************************************/
void listDelete(node_t *head){
    if (head == NULL)
        return;

    node_t *curr = head;
    node_t *next = NULL;
    while(curr)
    {
        next = curr->next;
        free(curr);
        curr = next;
    };
}

/******************************************************
 *                                                    *
 * listDeleteElement loescht ein Element in dem er    *
 * nach data sucht auf Basis von val                  *
 *                                                    *
 ******************************************************/
void listDeleteElement(node_t *head, int val){
    if (head == NULL)
        return;

    node_t *curr = head;

    while (curr->next && curr->data != val)
        curr = curr->next;

    // CHECK VAL AGAIN
    if (curr->data == val){
        // HEAD IS TARGET?
        if (curr == head){
            // HEAD IS ONLY->DELETE LIST
            if (curr->next == NULL){
                listDelete(head);
                return;
            }
            else{
                curr->data = curr->next->data;
                curr->next = curr->next->next;
                free(curr->next);
            }
        }
        else{
            curr->prev->next = curr->next;
            if (curr->next)
                curr->next->prev = curr->prev;
            free(curr);
        }
    };
}

/******************************************************
 *                                                    *
 * listPrint schreibt die Liste auf die CMD           *
 *                                                    *
 ******************************************************/
void listPrint(node_t *head){
    if (head == NULL)
        return;

    node_t *curr = head;
    int i = 1;
    while(1){
        printf("->%1d", curr->data);
        i++;
        if (curr->next)
            curr = curr->next;
        else
            return;
    };
}

/******************************************************
 *                                                    *
 * listPrintReverse schreibt die Liste rueckwarts     *
 * auf die CMD                                        *
 *                                                    *
 ******************************************************/
void listPrintReverse(node_t *head){
    if (head == NULL)
        return;

    node_t *curr = head;
    int i = 1;

    // GET LAST ELEMENT
    while (curr->next){
        curr = curr->next;
        i++;
    }

    // NOW BACKWARDS
    while (1){
        printf("\nElement %02d: %5d", i, curr->data);
        i--;
        if (curr->prev)
            curr = curr->prev;
        else
            return;
    };
}

/******************************************************
 *                                                    *
 * listAddElementSorted fuegt ein Element sortiert    *
 *                                                    *
 ******************************************************/
void listAddElementSorted(node_t *head, int val){
    if (head == NULL){
        printf("HEAD is empty!");
        return;
    };

    node_t *curr = head;

    // FIRST ELEMENT IS GREATER THAN NEW
    if (curr->data > val){
        node_t *element = newNode(curr->data, curr, curr->next);
        if (curr->next)
            curr->next->prev = element;
        curr->data = val;
        curr->next = element;
    }
    else{
        while (curr->next && curr->next->data < val)
            curr = curr->next;
        node_t *element = newNode(val, curr, curr->next);
        if (curr->next)
            curr->next->prev = element;
        curr->next = element;
    };
}
