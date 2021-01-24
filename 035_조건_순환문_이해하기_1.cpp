#include <stdio.h>

int main()
{
	int i = 1;
	int hap = 0;

	while (i <= 10) // i가 10보다 작거나 같은 동안 9~12번째 줄을 반복 실행한다. i가 11이 되는 순간 while 문은 종료되고, 프로그램은 13번째 줄로 이동한다.
	{
		hap = hap + i;
		i++;	// i의 값을 1 증가시킨다. 만약 i의 값을 1만큼 증가시키지 않는다면 i의 값은 항상 1이기 때문에 while 문은 종료되지 않고 무한정 실행된다.
	}

	printf("hap = %d", hap);	// hap = 55
}

/*
- 조건 순환문은 for 문을 대신하여 많이 사용된다.
- while 문은 조건식이 참인 동안 for 문처럼 중괄호의 범위에 있는 문장을 반복 실행한다.
- while 문도 for 문과 마찬가지로 continue 문과 break 문을 사용한다.
*/