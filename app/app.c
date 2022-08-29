#include "pointers.h"
#include "stdio.h"

int main(void){
    int test[] = {0,9,18,-65,-90,0,0,1};
    int swaps = bubble_sort(test,8);
    for(int i = 0; i < 8; i++){
        printf("%d ", test[i]);
    }
    printf("\nNumero de swaps %d ", swaps);
    return 0;
}
