#include <stdio.h>
int main()
{
    int n,n1,clearbit;
    printf("enter a num:\n");
    scanf("%d", &n);
    printf("enter a bit to clear:\n");
    scanf("%d", &n1);
    clearbit = n & (~(1 << n1));
    printf("Before clearing the bit %d bit: %d\n", n1, n);
    printf("After clearing the bit %d bit: %d\n", n1, clearbit);
    return 0;
}
