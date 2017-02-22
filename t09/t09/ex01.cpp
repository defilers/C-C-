//두숫자 입력받아 합을 출력
#include <stdio.h>

int main() {
	float a, b;
	scanf("%f%f", &a, &b);
	printf("합은 %f\n", a + b);
	printf("&a = %d  &b = %d\n", &a, &b);
}