#include <stdio.h>

int main() 
{
    int n, k, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation value (k): ");
    scanf("%d", &k);

    k = k % n;  

    int result[n];

    for(i = 0; i < k; i++) 
    {
        result[i] = arr[n - k + i];
    }

    for(i = k; i < n; i++) 
    {
        result[i] = arr[i - k];
    }

    for(i = 0; i < n; i++) 
    {
        printf("%d ", result[i]);
    }

    return 0;
}
