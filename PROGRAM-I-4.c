#include <stdio.h>
int main()
{
    int n,n1,cmplmntbit;
    printf("enter a num:\n");
    scanf("%d", &n);
    printf("enter a bit to set:\n");
    scanf("%d", &n1);
    cmplmntbit = n^(1 << n1);
    printf("Before complementing the bit %d bit: %d\n", n1, n);
    printf("After complementing the bit %d bit: %d\n", n1, cmplmntbit);
    return 0;
}
