#include<stdio.h>
int DecToOct(int n)
{
    if(n>0)
    {
        DecToOct(n/8);
        printf("%d",(n%8));
    }
}
int main() {
int n;
printf("Enter your decimal number: ");
scanf("%d",&n);
DecToOct(n);
return 0;
}