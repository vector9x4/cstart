#include <stdio.h>

int main()
{
	char i;
	int j;
	double k;

	printf("%d\n", sizeof(i));	// 1
	printf("%d\n", sizeof(j));	// 4
	printf("%d\n", sizeof(k));	// 8
}
/*
- sizeof �����ڴ� ���� �� ���ڿ��� �����ϴ� �޸��� ũ�⸦ ���ϱ� ���� ����Ѵ�.
- sizeof �����ڴ� ������ �ƴ� ���������� ����ص� �� ũ�⸦ ���� �� �ִ�.
*/