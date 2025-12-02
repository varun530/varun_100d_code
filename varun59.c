#include <stdio.h>

int main() {
    int n, i, num;
    int even = 0, odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &num);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
