#include <stdio.h>

int main() 
{
    int x,y,z,k;
    printf("enter the values of x,y,z:");
    scanf("%d %d %d",&x,&y,&z);
    y=x+y-(x=y); 
    printf("%d",y);
}
