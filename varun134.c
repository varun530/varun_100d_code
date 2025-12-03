#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status code;

    printf("Enter status code (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d", &code);

    switch (code) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
    }

    return 0;
}
