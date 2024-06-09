#include <stdio.h>
#include <string.h>

int main(){
    int myVal = 10;
    int *pMyVal = &myVal;
    int pointerSize = sizeof(pMyVal);
    printf("%p -> %d bytes\n", pMyVal, pointerSize);
    printf("%p -> %d bytes\n", &pMyVal, pointerSize);
    printf("%d -> %d bytes\n", *pMyVal, pointerSize);

    char myName[] = "Name";
    char *pMyName = &myName;
    printf("myName[] = \"Name\" with memory address %p \n", pMyName);

    int len = strlen(myName);
    for(int i = 0; i < len; i++){
        printf("myName[%d] = %c with memory address %p \n", i, *&myName[i], &myName[i]);
    }
}