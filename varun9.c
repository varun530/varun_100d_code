#include<stdio.h>
int main()
{
float principal, rate, time;
float simple_interest, compound_interest, amount;
int i;
printf("Enter Principal, Rate, and Time: ");
scanf("%f %f %f", &principal, &rate, &time);
simple_interest = (principal * rate * time) / 100;
amount = principal;
for (i = 1; i <= time; i++)
{
amount = amount * (1 + rate / 100);
}
compound_interest = amount - principal;
printf("Simple Interest = %.2f\n", simple_interest);
printf("Compound Interest = %.2f\n", compound_interest);
return 0;
}
