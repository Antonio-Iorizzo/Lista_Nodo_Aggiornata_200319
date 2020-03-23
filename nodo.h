#ifndef NODO_H
#define NODO_H

struct nodo {
    
    int val;
    struct nodo *next;
};

typedef struct nodo Nodo;
typedef struct nodo *NodoPtr;


void stampa(NodoPtr head);

void inserisciCoda(NodoPtr *head, int val);

void inserisciTesta(NodoPtr *head, int val);

void inserisciDopo(NodoPtr head, int val, int key);

void svuotaLista(NodoPtr *head);

#endif