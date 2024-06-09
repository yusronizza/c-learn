#include <stdio.h>
#include <stdbool.h>

int main() {
    //Ternary Operation
    bool myVal = false;
    myVal == true ? printf("True\n") : printf("False\n");

    //Switch Case
    int myInt = 10;
    switch (myInt)
    {
    case 1:
        printf("1\n");
        break;
    case 2:
        printf("2\n");
        break;
    case 3:
        printf("3\n");
        break;
    case 4:
        printf("4\n");
        break;
    case 5:
        printf("5\n");
        break;
    default:
        printf("None of above\n");
        break;
    }

    //For Loop
    int i = 0;
    const int MAX_LOOP = 50;
    for(i = 0; i < MAX_LOOP; i++){
        printf("%d For Loop\n", i);
    }
    printf("End For Loop\n\n");

    //While Loop
    while(i < 100){
        printf("%d While Loop\n", i);
        i++;
    }
    printf("End While Loop\n\n");

    //Do While
    do
    {
        printf("%d Do While Execution\n", i);
        i++;
    } while (i < 150);
    printf("End Do While Loop\n\n");

    //Break Statement
    i = 0;
    for(i = 0; i < MAX_LOOP; i++){
        if(i == 20){
            printf("Break : Exit Loop\n");
            break;
        }
        printf("%d For Loop with break\n", i);
    }

    //Continue Statement
    i = 0;
    for(i = 0; i < 10; i++){
        if(i == 3 || i == 7){
            printf("Continue : Skip current iteration\n");
            continue;
        }
        printf("%d For Loop with Continue\n", i);
    }

    //Goto Statement
    i = 0;
    for(i = 0; i < 10; i++){
        if(i == 3){
            printf("Goto\n");
            goto end;
        }
        printf("Iterarion : %d\n", i);
    }
    printf("%d Skipped\n", i);
    end : printf("%d End section\n", i);
}