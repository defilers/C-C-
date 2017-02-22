#include <stdio.h>
#include <string.h>

int main() {
	/*
	char s[100];

	scanf("%s", s);
	printf("%s\n", s);
	*/
	/*
	char str[100] = "hello";

	int len = strlen(str);

	printf("%d\n", len);
	*/
	char str1[100] = "Hello";
	char str2[100];

	strcpy(str2, str1); // 카피
	printf("%s\n", str2);

	strcat(str1, "add comp"); // 추가
	printf("%s\n", str1);

	int cmp = strcmp(str1, str2); // 비교 a가 b보다 앞일때 -1 같을때 0 뒤일때 1
	printf("%d\n", cmp);
}