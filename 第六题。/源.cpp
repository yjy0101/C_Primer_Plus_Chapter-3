#include<stdio.h>
int main()
{
	float h2o,weight,number;
	printf("������ˮ�Ŀ�������");
	scanf_s("%f", &h2o);
	weight = h2o * 950;
	number = weight / 3.0e-23;
	printf("ˮ��������Ϊ%.2e", number);
	return 0;
}