///*
//1.
//정수 하나를 매개변수로 받아
//그 수가 짝수이면 0 , 홀수이면 1을 반환하는 함수를 작성
//*/
//
//#include <stdio.h>
//
//int parity(int n) {
//	if (n % 2 == 0)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//int main() {
//	printf("%d\n", parity(5));
//	printf("%d\n", parity(-3));
//	printf("%d\n", parity(6));
//}

/*
4.
문자열을 매개변수로 받아 그 문자열에서 공백을
제거하여 출력하는 함수를 작성해보세요
*/

#include <stdio.h>

//void print_noSpace(char str[100]) {	// 초회
//	char result[100];
//	for (int i = 0; i < 100; i++)
//	{
//		if (str[i] != ' ')
//		{
//			result[i] = str[i];
//		}
//	}
//	printf("%s", result);
//}

void print_noSpace(char str[]) {	// 답안
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			printf("%c", str[i]);
		}
	}
}

int main() {
	print_noSpace("Hello, World!\n");
	print_noSpace("My name is Kim\n");
}
