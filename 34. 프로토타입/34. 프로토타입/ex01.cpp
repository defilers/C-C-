// prototype : 원형, 시제품

#include <stdio.h>

// 존재하지 않으면 사전에 정의되지 않아서 인식못함
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