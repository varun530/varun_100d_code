#include <stdio.h>

int main() 
{
    long long num;
    int freq[10] = {0};   
    int digit, i, maxFreq = 0, result = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num > 0) 
    {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for(i = 0; i < 10; i++) 
    {
        if(freq[i] > maxFreq) 
        {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);

    return 0;
}
