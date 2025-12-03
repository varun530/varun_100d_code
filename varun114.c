#include <stdio.h>

int main() 
{
    char s[1000];  
    scanf("%s", s);

    int n = 0;
    while(s[n] != '\0') 
    {
        n++;
    }

    int maxLen = 0;

    for(int i = 0; i < n; i++) 
   {
        int visited[256] = {0};
        int currentLen = 0;

        for(int j = i; j < n; j++) 
        {
            if(visited[(int)s[j]] == 1) 
            {
                break; 
            } else 
          {
                visited[(int)s[j]] = 1;
                currentLen++;
          }
        }

        if(currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
