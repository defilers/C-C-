// prototype : ����, ����ǰ

#include <stdio.h>

// �������� ������ ������ ���ǵ��� �ʾƼ� �νĸ���
int plus(int, int);
int minus(int, int);

int main() {
	int a = 10, b = 5;
	printf("%d\n", plus(a, b));
	printf("%d\n", minus(a, b));
}

int plus(int x, int y) {
	return x + y;
}
int minus(int x, int y) {
	return x - y;
}