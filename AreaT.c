#include <stdio.h>
int main(){
    int h,b,Area;
    printf("Enter the Height of the Traingle:");
    scanf("%d",&h);
    printf("Enter the Base of the Traingle:");
    scanf("%d",&b);
    Area=(h*b*0.5);
    printf("Area of the Traingle:%d\n",Area);
    return 0;
}