#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;

    char ch;
    while ((ch = getchar()) != '\n') {
        str1[len1++] = ch;
    }

    while ((ch = getchar()) != '\n') {
        str2[len2++] = ch;
    }

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    int found = 0;
    for (int shift = 0; shift < len1; shift++) {
        int match = 1;
        for (int i = 0; i < len1; i++) {
            if (str1[i] != str2[(i + shift) % len1]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
