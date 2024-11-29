#include <stdio.h>
#include "mathlib.h"

int add(int a, int b){
    printf("adding the numbers %d and %d\n", a, b);
    return a + b;
}
int sub(int a, int b){
    printf("subtracting the numbers %d and %d\n", a, b);
    return a - b;

}
int mult(int a, int b){
    printf("multiplying the numbers %d and %d\n", a, b);
    return a * b;
}
double div(int a, int b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0; // Handle division by zero
    }
    printf("dividing the numbers %d and %d\n", a, b);
    return (double)a / b;
}