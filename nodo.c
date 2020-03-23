#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void stampa(NodoPtr attuale ){

    while (attuale != NULL) {
        printf("%d ---> ", attuale->val);
        attuale = attuale->next;
    }
    printf("NULL\n");
}

void inserisciCoda(NodoPtr *head, int val){

    if (*head == NULL) {
        inserisciTesta(head, val);
        return;
    }

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = NULL;
    NodoPtr temp = *head;

    // ricerca della fine della lista per aggiungere il nuovo nodo in coda
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = nuovoNodo;
}

void inserisciTesta(NodoPtr *head, int val){

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = *head;
    
    *head = nuovoNodo;
}

void inserisciDopo(NodoPtr head, int val, int key){

    while (head!=NULL && head->val!=key){
        head = head->next;
    }

    /* key non trovato */

    if (head == NULL) return;

    NodoPtr nuovoNodo = malloc(sizeof(Nodo));
    nuovoNodo->val = val;
    nuovoNodo->next = head->next;
    head->next = nuovoNodo;

}

void svuotaLista(NodoPtr *head){

    NodoPtr temp;

    while (*head != NULL) {
        temp = *head;    
        *head = (*head)->next;
        
        printf("Rilascio del nodo con valore %d\n", temp->val);
        free(temp);
    }
}