#include "AVL_vers_PDF.h"
#include <stdio.h>

int main(){
    Arbre a = NULL;
    int val;
    while(scanf("%d", &val) == 1)
        ajouter_noeud(&a, val);
    /* printf("Affichage préfixe :\n");
    afficher_prefixe(a); */
    if(cree_pdf(a, "zoubidou.pdf") == 0){
        fprintf(stderr, "Erreur lors de la création du PDF !\n");
        return 1;
    }
    liberer_arbre(a);
    return 0;
}
