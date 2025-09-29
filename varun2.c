
#include<stdio.h>
int main()
{
int num1,num2;
int sum,difference,product,quotient;
printf("enter first number:");
scanf("%d",&num1);

printf("enter second number:");
scanf("%d",&num2);

sum=num1+num2;
difference=num1-num2;
product=num1*num2;
if (num2==0)
{
quotient=0;
}
else if(num1==0)
{
quotient=0;
}
else
{
quotient=num1/num2;
}
printf("sum=%d\n",sum);
printf("product=%d\n",product);
printf("difference=%d\n",difference);
printf("quotient=%d\n",quotient);

return 0;
}
