#include <stdio.h>

int main() {
    char str[200];
    int len = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        str[len++] = ch;
    }

    int lastSpace = -1;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' '))
            printf("%c.", str[i]);
    }

    printf(" ");
    for (int i = lastSpace + 1; i < len; i++)
        printf("%c", str[i]);

    return 0;
}
