#include <stdio.h>

int main() {
	int a = 3.14;
	double b = 10;
	printf("%d %f\n", a, b);
	// 실수를 정수형 변수에 담을수 없다
	// 정수를 실수형 변수에 담을수 있다


	// 형변환
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;

	printf("%f\n", avg);
	// 정수 / 정수 = 정수
	// 실수 / 정수 = 실수
	// 실수 / 실수 = 실수
	int sum1 = math + korean + english;
	double avg1 = (double)sum1 / 3;

	printf("%f\n", avg1);
}
