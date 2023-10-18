#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char something[100] = {"---------------\n"};
    srand(time(0));
    printf("What is the value of m : ");int m;scanf_s("%d",&m);
    printf("What is the value of n : ");int n;scanf_s("%d",&n);
    printf("What is the value of k [3;10] : ");int k;scanf_s("%d",&k);
    if(k < 3 || k > 10){printf("k can be only in the range of 3 and 10");return 1;}
    int randomnumber;
    printf("%s",something);
    for(int index = 0;index < m;index++){
        randomnumber = rand() % 20 - 10;
        printf("%3d",randomnumber);
        if((index + 1) % k == 0){printf("\n");}}
    double doublerandomnumber;
    printf("%s",something);
    for(int index = 0;index < n;index++){
        doublerandomnumber = ((double)rand())/(RAND_MAX);
        printf("%4.2lf",doublerandomnumber - 1);
        if((index + 1) % k == 0){printf("\n");}}
    printf("%s",something);
    return 0;}