#include <stdio.h>
int main(){
    int i1,i2,i3,sum;
    printf("Enter the Price of Item1:");
    scanf("%d",&i1);
    printf("Enter the Price of Item2:");
    scanf("%d",&i2);
    printf("Enter the Price of Item3:");
    scanf("%d",&i3);
    sum=i1+i2+i3;
    printf("Total Cost of The Items:%d\n",sum);
    return 0;
}