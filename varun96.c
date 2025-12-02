#include <stdio.h>

int main() {
    char str[200];
    int len = 0;

    char ch;
    while ((ch = getchar()) != '\n') {
        str[len++] = ch;
    }

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (i == len || str[i] == ' ') {
            for (int j = i - 1; j >= start; j--)
                printf("%c", str[j]);
            if (i != len)
                printf(" ");
            start = i + 1;
        }
    }

    return 0;
}
