#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0}; 

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;  

            if (freq[ch - 'a'] == 2) { 
                printf("%c", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found");
    return 0;
}
