#include <stdio.h>
int main(){
    int T1,T2;
    printf("Enter the Temperature in Celsius:");
    scanf("%d",&T1);
    T2=(T1*9/5)+32;
    printf("Temperature in Fahrenheit:%d\n",T2);
    return 0;
}