#include <stdio.h>

int main() {
    char str[200];
    int len = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        str[len++] = ch;
    }

    int maxLen = 0, currentLen = 0;
    int start = 0, maxStart = 0;

    for (int i = 0; i <= len; i++) {
        if (i < len && str[i] != ' ') {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
            }
            currentLen = 0;
            start = i + 1;
        }
    }

    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
