#include <stdio.h>
int main(){
    int S1,S2,S3,Perimeter;
    printf("Enter the Side1 of the Triangle:");
    scanf("%d",&S1);
    printf("Enter the Side2 of the Triangle:");
    scanf("%d",&S2);
    printf("Enter the Side3 of the Triangle:");
    scanf("%d",&S3);
    Perimeter=(S1+S2+S3);
    printf("Perimter of the Traingle:%d\n",Perimeter);
    if (S1==10 && S2==10){
        printf("Yayyya\n");
    }
    else{
        printf("F\n");
    }
    return 0;
}
