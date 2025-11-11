#include <stdio.h>

float squareRoot(float n) {
    float x = n;
    float y = 1;
    float e = 0.000001;  

    while (x - y > e) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    float a, b, c, d, root1, root2, realPart, imagPart;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        float sqrt_val = squareRoot(d);
        root1 = (-b + sqrt_val) / (2 * a);
        root2 = (-b - sqrt_val) / (2 * a);
        printf("Roots are real and different: %.0f, %.0f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0f\n", root1);
    }
    else {
        printf("Roots are complex\n");
    }

    return 0;
}
