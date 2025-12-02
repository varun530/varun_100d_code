#include <stdio.h>

int main() {
    char str[200], result[200];
    int k = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            if (str[i] != '\n')       
                result[k++] = str[i];
        }
    }

    result[k] = '\0'; 

    printf("%s", result);
    return 0;
}
