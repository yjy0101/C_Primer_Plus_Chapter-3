#include<stdio.h>
int main()
{
	float age, s_age;
	printf("Please enter your age:");
	scanf_s("%f", &age);
	s_age = age * 3.156e+7;
	printf("\nYour age %.2f = %e seconds",age,s_age);
	return 0;
}