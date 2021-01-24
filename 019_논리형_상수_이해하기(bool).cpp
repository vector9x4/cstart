#include <stdio.h>

#define	TRUE 1	// 논리형 상수 TRUE를 선언한다. 프로그램이 종료될 때까지 1값을 유지한다.
#define FALSE 0	// 논리형 상수 FALSE를 선언한다. 프로그램이 종료될 때까지 0값을 유지한다.

int main(void)
{
	if (TRUE)	// if 문은 참과 거짓에 따라 실행을 구분한다. 조건식이 if(TRUE)이고 TRUE는 참이기 때문에 9~11번째 줄이 실행된다.
	{
		printf("TRUE의 값은 참입니다.\n");
	}
	else
	{
		printf("TRUE의 값은 거짓입니다.\n");
	}

	if (FALSE)	// FALSE는 거짓이기 때문에 21-24번째 줄이 실행된다.
	{
		printf("FALSE의 값은 참입니다.\n");
	}
	else
	{
		printf("FALSE의 값은 거짓입니다.\n");
	}
}
/*
- 논리형 상수는 논리형 변수를 대신하여 사용되는 값이며, TRUE와 FALSE를 많이 사용한다. 
- C++ 언어에서는 논리형 값으로 참이 경우에 true, 거짓인 경우에 false가 사용된다.
*/