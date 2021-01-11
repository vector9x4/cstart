#include <stdio.h>

int main(void)
{
	int x;
	int y;

	x = 20;
	y = 10;

	if (x > y)	// 조건문이 참인지 검사하는 if 문
	{
		printf("x의 값이 y보다 큽니다.");
	}
	else	// 조건문이 거짓일 때 실행되는 else 절
	{
		printf("X의 값이 y보다 작거나 같습니다.");
	}
}

/*
일반적으로 프로그램은 위에서 아래로 한 줄씩 순서대로 실행되어 가나,
if~else 문을 만나는 경우, if 문과 else 절 중 하나만 실행되며, 이런 문장구조를 제어구조라고 함.
*/