#include<stdio.h>
int main()
{
	float h2o,weight,number;
	printf("请输入水的夸脱数：");
	scanf_s("%f", &h2o);
	weight = h2o * 950;
	number = weight / 3.0e-23;
	printf("水分子数量为%.2e", number);
	return 0;
}