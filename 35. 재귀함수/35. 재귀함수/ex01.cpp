// Àç±ÍÇÔ¼ö
// recursion

#include <stdio.h>

/*
void rec(int n) {
	printf("n = %d\n", n);
	if (n > 100) return;
	rec(n + 1);
}

int main() {
	rec(1);
}
*/

//ÆÑÅä¸®¾ó
// 5! = 5*4*3*2*1 = 120
// n! = n * (n-1)!

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", factorial(n));
}