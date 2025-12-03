#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) 
    {
        printf("File could not be created.\n");
        return 1;
    }

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
