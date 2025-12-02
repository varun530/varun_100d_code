#include <stdio.h>

int main() 
{
    int n, i, key, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];   
    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    pos = n - 1;
    while(pos >= 0 && arr[pos] > key) 
    {
        arr[pos + 1] = arr[pos]; 
        pos--;
    }

    arr[pos + 1] = key; 

    for(i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
