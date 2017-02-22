// 포인터(pointer) : 변수의 주소를 저장하는 변수
#include <stdio.h>

int main() {
	/*
	int a = 20;
	int *ptr_a = &a;

	printf("a의 값 : %d\n", a);
	printf("a의 주소 값 : %d\n", &a);
	printf("ptr_a에 저장된 값 : %d\n", ptr_a);
	printf("ptr_a가 가리키는 변수의 값 : %d\n", *ptr_a);
	*/
	/*
	int a = 10, b = 20, *ptr;

	ptr = &a;
	printf("%d\n", *ptr);
	ptr = &b;
	printf("%d\n", *ptr);
	*/
	/*
	int a = 10, *ptr;
	
	ptr = &a;
	printf("a의 값 : %d\n", a);

	*ptr = 20;
	printf("a의 값 : %d\n", a);
	*/

	int a = 10, *ptr = &a, **ptrptr = &ptr;

	printf("a = %d\n", a);
	printf("&a = %d\n", &a);

	printf("ptr = %d\n", ptr);
	printf("&ptr = %d\n", &ptr);

	printf("ptrptr = %d\n", ptrptr);
	printf("*ptrptr = %d\n", *ptrptr);
	printf("**ptrptr = %d\n", **ptrptr);

}