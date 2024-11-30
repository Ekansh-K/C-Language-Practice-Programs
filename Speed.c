#include <stdio.h>
int main(){
    int t,d;
    float s;
    printf("Enter the Distance Travelled:");
    scanf("%d",&d);
    printf("Enter the Timne taken to Travel the Distance:");
    scanf("%d",&t);
    s=(d/t);
    printf("Speed =%.2f\n",s);
    return 0;
}
//use %.1f to only display on e decimal point Value