#include <stdio.h>

int main() {
	
	/*
	// �Է¹��� ���ڵ��� ���ٷ� ���
	int arr[1000];
	int n;

	printf("�Է��� ������ ���� �Է� : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n-1; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	*/

	/*
	// �ִ� �ּ�
	int arr[1000];
	int n;

	printf("�Է��� ������ ���� �Է� : ");
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
	printf("�ִ� : %d, �ּ� : %d/n", max, min
	);
	*/

	//¦���� ����
	int arr[1000];
	int n;

	printf("�Է��� ������ ���� �Է� : ");
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