#include <stdio.h>

int main() {
	int a = 3.14;
	double b = 10;
	printf("%d %f\n", a, b);
	// �Ǽ��� ������ ������ ������ ����
	// ������ �Ǽ��� ������ ������ �ִ�


	// ����ȯ
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;

	printf("%f\n", avg);
	// ���� / ���� = ����
	// �Ǽ� / ���� = �Ǽ�
	// �Ǽ� / �Ǽ� = �Ǽ�
	int sum1 = math + korean + english;
	double avg1 = (double)sum1 / 3;

	printf("%f\n", avg1);
}
