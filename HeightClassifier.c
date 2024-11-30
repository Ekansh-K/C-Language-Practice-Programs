#include <stdio.h>
int main(){
    int h;
    printf("Enter the your Height(in cms):");
    scanf("%d",&h);
    if (h>160) {
        printf( "U Tall\n");

    }
    else if(h<140) {
        printf("U Short\n");
    }
    else{
        printf("U mid\n");
    }
    return 0;
}

