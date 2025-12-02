#include <stdio.h>

int main() {
    char date[20];
    int len = 0;
    char ch;

    while ((ch = getchar()) != '\n') {
        date[len++] = ch;
    }

    char day[3], month[3], year[5];
    day[0] = date[0]; day[1] = date[1]; day[2] = '\0';
    month[0] = date[3]; month[1] = date[4]; month[2] = '\0';
    year[0] = date[6]; year[1] = date[7]; year[2] = date[8]; year[3] = date[9]; year[4] = '\0';

    char *monthStr;
    if (month[0]=='0' && month[1]=='1') monthStr="Jan";
    else if (month[0]=='0' && month[1]=='2') monthStr="Feb";
    else if (month[0]=='0' && month[1]=='3') monthStr="Mar";
    else if (month[0]=='0' && month[1]=='4') monthStr="Apr";
    else if (month[0]=='0' && month[1]=='5') monthStr="May";
    else if (month[0]=='0' && month[1]=='6') monthStr="Jun";
    else if (month[0]=='0' && month[1]=='7') monthStr="Jul";
    else if (month[0]=='0' && month[1]=='8') monthStr="Aug";
    else if (month[0]=='0' && month[1]=='9') monthStr="Sep";
    else if (month[0]=='1' && month[1]=='0') monthStr="Oct";
    else if (month[0]=='1' && month[1]=='1') monthStr="Nov";
    else if (month[0]=='1' && month[1]=='2') monthStr="Dec";
    else monthStr="Invalid";

    printf("%s-%s-%s", day, monthStr, year);
    return 0;
}
