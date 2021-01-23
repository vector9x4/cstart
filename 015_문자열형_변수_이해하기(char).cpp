#include <stdio.h>

int main()
{
	char str[] = "���ѹα�"; // ���ڿ� ���� str�� �����ϰ�, ���ڿ��� "���ѹα�"���� �ʱ�ȭ. str[10]ó�� ���ڿ��� ���̺��� ū ������ ������ ���� �ֽ��ϴ�. �ѱ��� �� �ڴ� ���̰� 2, ������ 1�̴�.
	const char *j = "Hello World"; // C++11���� char* ������ string literal�� ���� �ʱ�ȭ�� �� �����ϴ�. ��� �Ͻó׿�. ���ڿ� ����� ������ ���� const ���̱�!! > �Ŀ� �ٽ� ����

	printf("���ڿ��� ���� str�� ���� %s\n", str);
	printf("���ڿ��� ���� j�� ���� %s\n", j);
}
/*
- ���ڿ��� ������ �����Ϳ� ���� ������ ���谡 �ִ�. �����Ͱ� ���İ��? �װ� ���߿�...
- C2440������ ����
	: C2440 can be caused if you attempt to initialize a non-const char* (or wchar_t*) by using a string literal in C++ code, when the compiler conformance option /Zc:strictStrings is set. In C, the type of a string literal is array of char, but in C++, it is array of const char.
	"C������ ���ڿ� ���ͷ��� char�� �迭������, C++������ const char�� �迭�̴�." ��� �մϴ�!!
*/