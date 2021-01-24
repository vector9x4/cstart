#include <stdio.h>

int main()
{
	int x = 1;
	int y = 2;
	int max;

	max = x > y ? x : y;

}

/*
- 조건 연산자(?:)는 주어진 식을 평가하여 조건식이 참과 거짓에 따라 실행되는 부분이 결정된다. if 문을 대체하여 쓰인다.
- printf() 함수를 사용하여 max의 값을 알아내면 x가 2이든 y가 2이든 큰 쪽을 따르므로 2가 된다.
*/