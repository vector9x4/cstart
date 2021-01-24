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
- sizeof 연산자는 변수 및 문자열이 차지하는 메모리의 크기를 구하기 위해 사용한다.
- sizeof 연산자는 변수가 아닌 데이터형을 사용해도 그 크기를 구할 수 있다.
*/