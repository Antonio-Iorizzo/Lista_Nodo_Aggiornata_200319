#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

int main(){
    
    NodoPtr head = NULL;
    stampa(head);
    

    inserisciCoda(&head, 5);
    
    stampa(head);

    inserisciDopo(head, 8, 5);
    
    stampa(head);

    inserisciTesta(&head, 10);
    
    stampa(head);

    inserisciDopo(head, 9, 5);
    
    stampa(head);

    inserisciCoda(&head, 11);
    
    stampa(head);


    svuotaLista(&head);
    
    return 0;
}
