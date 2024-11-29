#include <stdio.h>
#include "mathlib.h"

int add(int a, int b){
    printf("adding the numbers %d and %d\n", a, b);
    return a + b;
}
int multiply(int a, int b){
    printf("multiplying the numbers %d and %d\n", a, b);
    return a * b;
}