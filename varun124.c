#include <stdio.h>

int main() {
    FILE *fs, *fd;
    char source[50], destination[50];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", destination);

    fs = fopen(source, "r");
    if (fs == NULL) {
        printf("Source file cannot be opened.\n");
        return 1;
    }

    fd = fopen(destination, "w");
    if (fd == NULL) {
        printf("Destination file cannot be created.\n");
        fclose(fs);
        return 1;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully to %s\n", destination);

    return 0;
}
