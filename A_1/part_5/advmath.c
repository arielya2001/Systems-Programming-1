#include <stdio.h>
#include <math.h>
#include "advmath.h"

// Exponentiation
double power(double base, int exp) {
    double result = 1.0;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Square root
double square_root(double num) {
    if (num < 0) {
        printf("Error: Negative input for square root.\n");
        return -1;
    }
    return sqrt(num);
}


// Average
float average(int arr[], int size) {
    if (size <= 0) return 0.0;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}
