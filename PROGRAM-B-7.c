#include <stdio.h>

int main() 
{
    int x,y,z;
    printf("enter the values of x,y:");
    scanf("%d %d",&x,&y);
    z=((x*y)==(y*x));
    printf("%d",z);
}
