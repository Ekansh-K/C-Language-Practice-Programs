#include <stdio.h>
#include <math.h>
int main(){
    int s,m,h,l,x;
    printf("Enter The Amount of Seconds:");
    scanf("%d",&s);
    h=(floor(s/3600));
    m=((s%3600)/60);
    l=(s%60);
    printf("%d Seconds can written as %d hours, %d minutes and %d Seconds\n",s,h,m,l);
    x=sqrt(s);
    printf("%d\n",x);
    return 0;

}

//have to write gcc Seconds.c -lm if it does not work