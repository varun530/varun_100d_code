#include <stdio.h>

int main() 
{
    char str[100];
    int len = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        str[len++] = ch;
    }

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            if (!(i == len-1 && j == len-1)) 
                printf(",");
        }
    }

    return 0;
}
