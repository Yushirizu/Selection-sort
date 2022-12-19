#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[20] = {78,40,84,12,86,22,42,44,82,77,96,54,70,59,37,95,4,49,63,27};
    int enCours, ppt, deplac, temp,i;

    printf("TABLEAU NON TRIE\n");

    for(i = 0; i<=19;i++){
        printf("Valeur  [%d] : %d\n",i,tab[i]);
    }


    for (enCours=0; enCours < 20; enCours++){

        /*On commence par la première valeur du tableau et celle-ci devient la valeur la plus petite : la valeur en cours devient la valeur la plus petite*/

        ppt = enCours;

        /*pour i = de en cours à 19 si la valeur du tableau de en cours est plus petite notre valeur plus petite on dis que la valeur plus petite est égal à la position à la quelle on est c'est à dire en cours mais on doit garder en cours*/

        for(deplac=enCours ; deplac<20; deplac++){

            if(tab[deplac] < tab [ppt]){

                ppt = deplac;

            }

        }

       /*on échange en cours et plus petit*/

    temp = tab[enCours];
    tab[enCours] = tab[ppt];
    tab[ppt] = temp;


    }

    printf("TABLEAU TRIE\n");

    for(i = 0; i<=19;i++){
        printf("Valeur  [%d] : %d\n",i,tab[i]);
    }

}
