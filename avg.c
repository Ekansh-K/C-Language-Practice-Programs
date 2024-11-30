#include <stdio.h>
int main(){
    int num1,num2,num3,num4,num5,avg;
    printf("Enter the English Marks:");
    scanf("%d",&num1);
    printf("Enter the Maths Marks:");
    scanf("%d",&num2);
    printf("Enter the Science Marks:");
    scanf("%d",&num3);
    printf("Enter the SST Marks:");
    scanf("%d",&num4);
    printf("Enter the Edging Marks:");
    scanf("%d",&num5);
    avg=(num1+num2+num3+num4+num5)/5;
    printf("Your Avg Marks are:%d\n",avg);
    return 0;
}