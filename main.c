#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[20] = {78,40,84,12,86,22,42,44,82,77,96,54,70,59,37,95,4,49,63,27};
    int enCours, smallest, movement, temp,i;

    printf("UNSORTED TABLE\n");

    for(i = 0; i<=19;i++){
        printf("Value  [%d] : %d\n",i,tab[i]);
    }


    for (inCourse=0; inCourse < 20; inCourse++){

        /*We start with the first value of the array and this becomes the smallest value: the current value becomes the smallest value*/

        smallest = inCourse;

        /*for i = from current to 19 if the array value of current is smaller than our smaller value we say that the smaller value is equal
        to the position at which we are current but we must keep current*/

        for(movement=inCourse ; movement<20; movement++){

            if(tab[movement] < tab [smallest]){

                smallest = movement;

            }

        }

       /*we exchange in progress and smaller*/

    temp = tab[inCourse];
    tab[inCourse] = tab[smallest];
    tab[smallest] = temp;


    }

    printf("SORT TABLE\n");

    for(i = 0; i<=19;i++){
        printf("Value  [%d] : %d\n",i,tab[i]);
    }

}
