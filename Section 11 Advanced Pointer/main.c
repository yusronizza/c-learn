#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
void (*fpSwap)(int *x, int *y);

int main(){
    int x = 9;
    int y = 12;
    printf("Initial Value\n");
    printf("x : %d, y : %d\n\n", x, y);

    //Function Pointer
    fpSwap = &swap;
    printf("Function Pointer : %p \n", fpSwap);

    //Call Ordinary Function
    swap(&x, &y);
    printf("After function call -> x : %d, y : %d\n", x, y);
    
    //Call Function Pointer
    (*fpSwap)(&x, &y);
    printf("After function pointer call -> x : %d, y : %d\n", x, y);
}

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}