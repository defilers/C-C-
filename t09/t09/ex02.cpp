// 체중과 키로 체질량지수(실수)
#include <stdio.h>
int main() {
	float a, b, c;
	printf("체중(kg) : ");
	scanf("%f", &a);
	printf("키(cm) : ");
	scanf("%f", &b);
	b = b*0.01;
	c = a / (b*b);
	printf("체질량지수 : %f\n", c);
}