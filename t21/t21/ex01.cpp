#include <stdio.h>

int main() {
	
	/*
	// 입력받은 숫자들을 꺼꾸로 출력
	int arr[1000];
	int n;

	printf("입력할 숫자의 개수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n-1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	*/

	/*
	// 최대 최소
	int arr[1000];
	int n;

	printf("입력할 숫자의 개수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int max = arr[0], min = arr[0];

	for (int i = 1; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		else if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("최대 : %d, 최소 : %d/n", max, min
	);
	*/

	//짝수의 갯수
	int arr[1000];
	int n;

	printf("입력할 숫자의 개수 입력 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int cnt = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}

	printf("%d\n", cnt);
}