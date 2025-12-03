#include <stdio.h>

int main() 
{
    char s[1000], t[1000];
    scanf("%s %s", s, t);

    int n1 = 0, n2 = 0;
    while(s[n1] != '\0') n1++;
    while(t[n2] != '\0') n2++;

    if(n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};

    for(int i = 0; i < n1; i++) {
        freq[s[i] - 'a']++;
    }

    for(int i = 0; i < n2; i++) {
        freq[t[i] - 'a']--;
    }

    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
