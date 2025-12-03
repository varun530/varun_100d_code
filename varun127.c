#include <stdio.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Input file cannot be opened.\n");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Output file cannot be created.\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Lowercase letters converted to uppercase and written to output.txt\n");

    return 0;
}
