#include<stdio.h>
int main()
{
int length,breadth,area,perimeter;
printf("enter the length:");
scanf("%d",&length);

printf("enter the breadth:");
scanf("%d",&breadth);

area=(length*breadth);
perimeter=2*(length+breadth);

printf("area=%d\n",area);
printf("perimeter=%d\n",perimeter);

return 0;
}
