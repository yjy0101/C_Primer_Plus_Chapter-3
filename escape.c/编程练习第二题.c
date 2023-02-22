#include<stdio.h>
int main()
{
	int number;
	printf("Please enter a ASCII number:_____\b\b\b\b\b");
	scanf_s("%d", &number);
	printf("number %d is %c",number,number);
	return 0;
}