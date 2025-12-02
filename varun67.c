#include <stdio.h>

int main() 
{
    int n, i, pos, element;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1]; 
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter position and element: ");
    scanf("%d %d", &pos, &element); 

    for(i = n; i >= pos; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element; 

    for(i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
