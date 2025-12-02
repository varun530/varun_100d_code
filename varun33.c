#include <stdio.h>
int main() 
{
    int n, original, rem, digits = 0;
    int sum = 0;

    scanf("%d", &n);
    original = n;

    int temp = n;
    while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) 
    {
        rem = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) 
        {
            power *= rem;
        }

        sum += power;
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
