/*
*
*Lab4
*Program:Factorial
*Author: Pratyush Nepal
*Ref:Book
*
*/
#include <stdio.h>
int fact(int n);

int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Factorial of %d is %ld", n, fact(n));
    return 0;
}
int fact(int n)
{
    if (n >= 1)
    {

        return n*fact(n-1);
        }
    else
    {
        return 1;
        }
}
