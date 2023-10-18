#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0));
    printf("Enter the value for a: ");int a;scanf_s("%d", &a);
    printf("Enter the value for b: ");int b;scanf_s("%d", &b);
    if (a >= b) {printf("a must be less than b!\n");return 1;}
    const int arraySize = 10;
    int array[arraySize];
    int min = 9999999;
    int sum = 0;
    int foundZero = 0;
    for (int index = 0; index < arraySize; index++) {
        array[index] = rand() % (b - a + 1) + a;
        if (fabs(array[index]) < min) {
            min = abs(array[index]);}
        if (array[index] == 0) {
            foundZero = 1;}
        if (foundZero) {
            sum += fabs(array[index]);}
        printf("%d ", array[index]);}
    printf("\nMin is: %d\n", min);
    if (sum) {printf("Sum is: %d\n", sum);}
    else {printf("No zeroes found!\n");}
    return 0;}