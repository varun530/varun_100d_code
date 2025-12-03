#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;  

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Roll No: ");
    scanf("%d", &ptr->roll_no);

    printf("Enter Marks: ");
    scanf("%d", &ptr->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}
