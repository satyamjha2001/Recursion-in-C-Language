#include <stdio.h>
int printN(int n)
{
    if(n>0)
    {
        printN(n - 1);
        printf("%d ", n*n);
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