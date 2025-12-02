#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32; // convert to lowercase

        if (ch >= 'a' && ch <= 'z') { // alphabet check
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);
    return 0;
}
