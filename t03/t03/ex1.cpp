#include <stdio.h>

int main() {
	printf("%d + %d = %d\n",2,3,5); // 정수

	printf("%f\n", 3.14); // 실수
	printf("%.2f\n", 3.141592); // 자릿수제한
	
	printf("%g\n", 3.141592); // 실수(지수형태)
	printf("%.3g\n", 89124876812.98172398);
	
	printf("%c %c %c\n", 'a', 'b', 'c');
	// 문자출력 (알파벳, 숫자, 기호, \n)(x 한글,한자,유니코드)

	printf("%s\n", "안녕하세요"); // 문자열 (한글가능)
}