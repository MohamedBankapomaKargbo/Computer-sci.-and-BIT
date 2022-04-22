#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int sum=0;
    printf("PLease enter the number to calculate");
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
        sum =sum + i;
    printf("The number from i to %d-&d\n", n, sum);
    system ("PAUSE");
    return 0;
}
