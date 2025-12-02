#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;

    for (long long x = 1; x <= n; x++) {
        long long leftSum = x * (x + 1) / 2;
        long long rightSum = total - (leftSum - x);

        if (leftSum == rightSum) {
            printf("%lld\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
