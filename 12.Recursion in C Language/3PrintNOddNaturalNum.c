#include <stdio.h>
int printN(int n)
{
    if(n>0)
    {
        printN(n - 1);
        printf("%d ",2*n-1);
    }
}
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printN(n);
    return 0;
}