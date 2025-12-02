#include <stdio.h>
int main() 
{
    int n;
    double sum = 0.0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) 
    {
        if(i == 1)
            sum += 1;  
        else
            sum += (double)(2*i - 1) / (2*i);
    }
    
    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}
