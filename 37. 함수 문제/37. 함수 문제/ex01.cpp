///*
//1.
//���� �ϳ��� �Ű������� �޾�
//�� ���� ¦���̸� 0 , Ȧ���̸� 1�� ��ȯ�ϴ� �Լ��� �ۼ�
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
���ڿ��� �Ű������� �޾� �� ���ڿ����� ������
�����Ͽ� ����ϴ� �Լ��� �ۼ��غ�����
*/

#include <stdio.h>

//void print_noSpace(char str[100]) {	// ��ȸ
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

void print_noSpace(char str[]) {	// ���
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
