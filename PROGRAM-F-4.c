#include <stdio.h>

int main() 
{
    int i,j,k;
    printf("enter the values of i,j:");
    scanf("%d %d",&i,&j);
    k=(i||j)>>j;
    printf("%d",k);
}
