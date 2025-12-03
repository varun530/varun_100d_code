#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= nums[i];
    }

    printf("Repeated element: %d\n", result);

    return 0;
}
