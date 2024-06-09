#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    //Memory allocation with malloc()
    //N is Number of element
    //Wide Size of each element
    */
    float *startPtr;
    int N = 10;
    int wide = sizeof(float);
    startPtr = (float*)malloc(N * wide);
    if(startPtr == NULL){
        fprintf(stderr, "Out of memory");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < N; i++){
        startPtr[i] = (rand()*rand()/1000);
    }
    for (int i = 0; i < N; i++){
        printf("ptr[%d] : %p -> %.2f\n", i, &startPtr[i], *&startPtr[i]);
    }

    free(startPtr);

    /*
    //Memory allocation with malloc()
    //N is Number of element
    //Wide Size of each element
    */
    return 0;
}