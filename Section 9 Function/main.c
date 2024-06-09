#include <stdio.h>
#include <string.h>
#include <math.h>

//Function Prototype
float calculate_distance(float x, float y);
float swap(float *x, float *y);

int main(){
    float x = 6.0; 
    float y = 8.0;
    float result;
    
    result = calculate_distance(x, y);
    printf("x : %f, y : %f -> %f \n", x, y, result);

    swap(&x, &y);
    result = calculate_distance(x, y);
    printf("x : %f, y : %f -> %f \n", x, y, result);
}

//Function pass by value
float calculate_distance(float x, float y){
    return sqrt(pow(x, 2) + pow(y, 2));
}

//Function pass by reference
float swap(float *x, float *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}