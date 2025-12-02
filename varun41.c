#include <stdio.h>
int main() 
{
    int n, first, last, temp, digits = 0, power = 1, middle;

    scanf("%d", &n);

    temp = n;
    last = temp % 10; 

    while (temp >= 10) 
    {
        temp /= 10;
        digits++;
        power *= 10;
    }
    first = temp; 

    middle = n % power;  
    middle = middle / 10; 

    int swapped = last * power + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}
