/*
1.
100개 이하의 정수를 입력받아
첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
다음줄에 홀수번째 숫자들을 순서대로 출력하는 프로그램을 만들어 보세요.

입력예
7
3 1 4 1 5 9 2

출력예
1 1 9
3 4 5 2

#include <stdio.h>
int main() {
	int num;
	int cul[100];

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &cul[i]);
	}
	for (int i = 1; i < num; i+=2) {
		printf("%d ", cul[i]);
	}
	printf("\n");
	for (int i = 0; i < num; i+=2) {
		printf("%d ", cul[i]);
	}
	printf("\n");
}
*/
/*
2.
10 * 10 이하의 정수형 이차원 배열을 입력받아
그 배열의 각 행의 요소의 합을 출력하는 프로그램을 만들어 보세요.

입력예
3 4
4 2 6 3
7 9 3 4
5 1 2 1

출력예
15
23
9
*/
#include <stdio.h>
int main() {
	int arr[10][10];
	int arrSize[2];

	for (int i = 0; i < 2; i++) {
		scanf("%d", &arrSize[i]);
	}

	for (int i = 0; i < arrSize[0]; i++) {
		for (int j = 0; j < arrSize[1]; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < arrSize[0]; i++) {
		int sum = 0;
		for (int j = 0; j < arrSize[1]; j++) {
			sum += arr[i][j];
		}
		printf("%d\n", sum);
	}
}