int fibonacci(int);
#include<stdio.h>
int main()
{
int n, i;
printf("Enter the number of element you want in series : ");
scanf("%d",&n);
printf("\nFibonacci Series is : ");
for(i=0;i<n;i++)
{
printf("%d ",fibonacci(i));
}
printf("\n");
}
int fibonacci(int i)
{
if(i==0)
 return 0;
else if(i==1)
 return 1;
else
 return (fibonacci(i-1)+fibonacci(i-2));
}

