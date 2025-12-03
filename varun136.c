#include <stdio.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Operation choice;
    int a, b;

    printf("Enter choice (0=ADD, 1=SUBTRACT, 2=MULTIPLY): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
