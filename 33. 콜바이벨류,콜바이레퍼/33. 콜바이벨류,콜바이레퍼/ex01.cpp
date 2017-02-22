// call by value
// call by reference
#include <stdio.h>

void swap(int *x, int *y) {// 포인터를 통한 원본의 변환
	/*
	// 포인터의 교환 이러면 안바뀜(바로가기만 변경하고 원본은 변화없음 시스템상의 포인터가 아니라 복제한 포인터를 변경했기 때문)
	int *tmp;
	tmp = x;
	x = y;
	y = tmp;
	*/
	// 값의 교환 이건 바뀜
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	swap(&a, &b);

	printf("a = %d, b = %d\n", a, b);
}