#include <stdio.h>

int main() 
{
    int i,j,k,l;
    printf("enter the values of i,j,k:");
    scanf("%d %d %d",&i,&j,&k);
    l=i||(j=20)&&k;
    printf("%d %d %d %d",i,j,k,l);
}
