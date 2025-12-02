#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int line = 1; line <= (r + c - 1); line++) {
        int start_col = line <= r ? 0 : line - r;
        int count = line <= c ? line : c - start_col;

        for (int j = 0; j < count; j++) {
            int i = line - j - 1;
            int col = start_col + j;
            if(i >= 0 && i < r && col >=0 && col < c)
                printf("%d ", a[i][col]);
        }
    }

    return 0;
}
