#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main() {
    srand(time(0));
    printf("Enter a number from 1 to 10: ");int number;scanf_s("%d", &number);
    double randomnumber2;
    int randomnumber;
        switch (number) {
        case 1:
            randomnumber = rand() % 3 - 4;
            break;
        case 2:
            randomnumber = rand() % 100 + 299;
            break;
        case 3:do {randomnumber = rand() % 37 - 35;
        }while (randomnumber % 2 != 0); 
            break;
        case 4:
            randomnumber = rand() % 256 - 128; 
            break;
        case 5:do {
            randomnumber = rand() % 20 - 7 + 1;
        } while (randomnumber % 2 == 0);
        break;
        case 6:
            randomnumber2 = ((double)rand())/((double)RAND_MAX/(7.85 + 28 * sqrt(3)));
            break;
        case 7:
            randomnumber = rand() % 200 - 100;
            break;
        case 8:
            randomnumber = rand() % (71 - 23) + 23;
            break;
        case 9:
            randomnumber = rand() % 2;
            break;
        case 10:
            randomnumber2 = ((double)rand())/((double)RAND_MAX/(sqrt(82) - sqrt(17) + sqrt(17)));
            break;
        default:
            printf("Invalid user input!");
            return 0;}
        if(number != 6 && number != 10)printf("The random number is : %d", randomnumber);
        else(printf("The random number is : %lf",randomnumber2));
        return 0;}