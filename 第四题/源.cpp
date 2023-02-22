#include<stdio.h>
int main()
{
	float a;
	scanf_s("%f", &a);
	printf("Enter a floating-point value:%.2f\n",a);
	printf("fixed-point notation:%f\n",a);
	printf("exponential notation:%e\n",a);
	printf("p notation:%.2a", a);				//p计数法（即十六进制记数法）转移字符用 %a
	return 0;
}