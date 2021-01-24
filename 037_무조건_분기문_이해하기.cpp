#include <stdio.h>

int main()
{
	int i;
	int j;

	for (i = 1; i < 100; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j);
			if (i == 9 && j == 9)goto ku_ku_end;	// i가 9이고 j가 9인 경우에 두 개의 중첩된 for 문을 모두 종료하고, ku_ku_end 레이블로 실행을 이동한다. goto 문을 사용하지 않으면 break 문을 두 번 사용해야 한다.(for 문이 두 개이므로)
		}
	}

ku_ku_end:;	// ku_ku_end 레이블을 정의하며, 특별히 실행되는 문장이 없을 경우에는 세미콜론을 사용해서 선언한다.
}

/*
- 무조건 분기문은 프로그래밍에서 잘 사용하지 않지만, 여러 개의 중첩된 문장을 한 번에 빠져나가고자 할 때 매우 유용하게 쓰인다.
*/