// ü�߰� Ű�� ü��������(�Ǽ�)
#include <stdio.h>
int main() {
	float a, b, c;
	printf("ü��(kg) : ");
	scanf("%f", &a);
	printf("Ű(cm) : ");
	scanf("%f", &b);
	b = b*0.01;
	c = a / (b*b);
	printf("ü�������� : %f\n", c);
}