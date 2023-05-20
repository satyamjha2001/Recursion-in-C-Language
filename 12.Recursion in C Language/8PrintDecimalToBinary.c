#include<stdio.h>
int DecToBinary(int n)
{
    if(n>0)
    {
        DecToBinary(n/2);
        printf("%d",(n%2));
    }
}
int main() {
int n;
printf("Enter your decimal number: ");
scanf("%d",&n);
DecToBinary(n);
return 0;
}