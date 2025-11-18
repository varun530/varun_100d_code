#include<stdio.h>
int main() 
{
    int n, i = 2;
    long long product = 1; 

    scanf("%d", &n);

    while (i <= n) 
    {
        product *= i;
        i += 2; 
    }

    printf("%lld", product);

    return 0;
}
