#include <stdio.h>

enum Months {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Months month;
    
    printf("Enter month number (0=JAN, 1=FEB, ..., 11=DEC): ");
    scanf("%d", &month);

    switch(month) {
        case JAN: printf("JAN has 31 days\n"); break;
        case FEB: printf("FEB has 28 or 29 days\n"); break;
        case MAR: printf("MAR has 31 days\n"); break;
        case APR: printf("APR has 30 days\n"); break;
        case MAY: printf("MAY has 31 days\n"); break;
        case JUN: printf("JUN has 30 days\n"); break;
        case JUL: printf("JUL has 31 days\n"); break;
        case AUG: printf("AUG has 31 days\n"); break;
        case SEP: printf("SEP has 30 days\n"); break;
        case OCT: printf("OCT has 31 days\n"); break;
        case NOV: printf("NOV has 30 days\n"); break;
        case DEC: printf("DEC has 31 days\n"); break;
        default: printf("Invalid month!\n");
    }

    return 0;
}
