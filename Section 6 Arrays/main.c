#include <stdio.h>
#include <string.h>

int main(){
    //Array
    int myArray[] = {1, 2, 3, 4, 5};

    //String
    char myString[20] = "Fullname";
    int len = strlen(myString);
    printf("My String : %s\n", myString);

    for(int i = 0; i < len; i++){
        printf("myString[%d] = %c \n", i, myString[i]);
    }

    //Assign String to a Variable
    char myName[15];
    strcpy(myName, "Yusron Izza");
    printf("%s\n", myName);
}