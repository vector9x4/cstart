#include <stdio.h>

int main()
{
	int x = 1;
	int y = 2;
	int z = 3;

	if (x == y) printf("x는 y와 같습니다.\n");
	if (x != y) printf("x는 y와 같지 않습니다.\n");
	if (x > y) printf("x는 y보다 큽니다.\n");
	if (x < y) printf("x는 y보다 작습니다.\n");
	if (y >= z) printf("y는 z보다 크거나 같습니다.\n");
	if (y <= z) printf("y는 z보다 작거나 같습니다.\n");
}

/*
- 관계 연산자는 주어진 두 식을 평가하여 그 값이 큰지, 작은지, 크거나 같은지, 그리고 같지 않은지를 비교하기 위해 사용한다.
- 관계 연산자의 평가는 일반적인 수학에서의 평가와 같다.
*/