#include <stdio.h>

int main() {
	/*
	int a = 10;
	int *ptr_a = &a;

	printf("ptr_a의 값 : %d\n", ptr_a);
	printf("ptr_a+1의 값 : %d\n", ptr_a+1);
	*/

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++) {
		printf("arr+i = %d\n", i, arr+i);
	}
	for (int i = 0; i < 10; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		printf("*(arr+%d) = %d\n", i, *(arr + i));
	}
	for (int *ptr = arr; ptr < arr+10; ptr++) {
		printf("*ptr = %d\n", *ptr);
	}
}