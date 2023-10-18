#include <stdio.h>
int main() {
    int array[11] = {9, 6, 4, 5, 2, 1, 4, 5, 3, 7, 2};
    int sum = 1,atom, min = 999999;
    for (int index = 0; index < sizeof(array) / sizeof(array[0]); index++) {
        if (array[index] % 2 == 0) {sum = sum * index;}
        if (array[index] < min){min = array[index];
            atom = index;}}
    array[atom] = sum;
    for (int index = 0; index < sizeof(array) / sizeof(array[0]); index++) {printf("%d ", array[index]);}
    printf("\nSum is: %d\n", sum);
    return 0;}