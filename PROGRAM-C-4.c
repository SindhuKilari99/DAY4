#include <stdio.h>

int main() 
{
    int i,j,k;
    printf("enter the values of i,j:");
    scanf("%d %d",&i,&j);
    k=i&&(j=20);
    printf("%d %d %d",i,j,k);
}
