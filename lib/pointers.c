//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//

#include "pointers.h"

//Función swap para los algoritmos de ordenamiento, como el ejemplo visto en clase
void swap(int *a, int *b){
    int pivote = *a;
    *a = *b;
    *b = pivote;
}

int bubble_sort(int *collection, int count){
    int num_swap = 0;
    for(int i = 0; i < count; i++){
        for(int j = i; j < (count - 1); j++){
            if (*(collection+j) > *(collection+j+1)){
                swap((collection+j),(collection+j+1));
                num_swap++;
            }
        }
    }
    return num_swap;
}

void insertion_sort(int *collection, int count){
    for(int i = 1; i < count; i++){
        int *mover = collection+1;
        int j = 1;
        while(*mover < *(mover-1) && (mover-1) >= collection){
            swap(mover,(mover-j));
            mover--;
        }
    }
}

void reverse(int *collection, int count){
    int i, j, mitad;
    mitad = count/2;
    for(i = 0, j = count - 1; i < mitad; i++, j--){
        swap(collection + 1, collection + j);
    }
}

int calulate_frequency(int *collection, int count, int target){
    int freq = 0;
    for(int i = 0; i < count; i++){
        if(*(collection+1) == target){
            freq++;
        }
    }
    return freq;
}
