#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n); 

    int nums[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int totalSum = (n * (n + 1)) / 2; 
    int arrSum = 0;
    for(int i = 0; i < n; i++)
        arrSum += nums[i];

    int missing = totalSum - arrSum;
    printf("%d\n", missing);
    return 0;
}
