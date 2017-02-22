#include <stdio.h>

int main() {
	/*
	int times;
	scanf("%d", &times);

	for (int i = 1; i <= times; i++) {
		if (i%10 == 3 || i % 10 == 6 || i % 10 == 9) printf("* ");
		else printf("%d ", i);
	}
	printf("\n");
	
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int x = 1;
		for (int j = 1; j <= i; j++) {
			printf("%d ", x);
			x += 2;
		}
		printf("\n");
	}
	*/

	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}