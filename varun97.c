#include <stdio.h>

int main() {
    char str[200];
    int len = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        str[len++] = ch;
    }

    for (int i = 0; i < len; i++) {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' ')) {
            printf("%c.", str[i]);
        }
    }

    return 0;
}
