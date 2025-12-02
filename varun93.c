#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    while (1) {
        char ch = getchar();
        if (ch == '\n') break;
        if (ch >= 'A' && ch <= 'Z') ch += 32; 
        freq1[ch - 'a']++;
    }

    while (1) {
        char ch = getchar();
        if (ch == '\n') break;
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        freq2[ch - 'a']++;
    }

    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
