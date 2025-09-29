#include<stdio.h>
int main()
{
float radius,area,circumference;

printf("enter the radius of the circle:");
scanf("%f",&radius);

area=3.14*radius*radius;
circumference=2*3.14*radius;

printf("area of the circle=%f\n",area);
printf("circumference of the circle=%f\n",circumference);

return 0;
}
