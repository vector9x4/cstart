#include <stdio.h>

union tagKurt	// 공용체를 선언한다. 구조체와 마찬가지로 실제로 변수가 정의되는 것은 아니다.
{
	int i;
	float d;
};	// 세미콜론 조심!!!

int main()
{
	union tagKurt K;	// 공용체 union tagKurt에 대한 변수 K를 정의한다. 선언을 한 후, 변수명을 정의해야 한다.

	K.i = 0;	// 공용체 변수 i에 0을 대입한다.
	K.d = 5.5;	// 공용체 변수 d에 5.5를 대입한다.

	printf("V.i = %d\n", K.i);	// K.i = 1085276160 : 공용체 변수 i의 값을 출력한다. 공용체 변수 d에 5.5를 대입하여 i의 값이 중첩되었다.
	printf("V.d = %f\n", K.d);	// K.d = 5.500000 : 공용체 변수 d의 값을 출력한다.
}

/*
- 공용체는 구조체와 사용 방법이 유사하지만, 변수가 사용하는 메모리 공간이 중첩된다는 것이 다르다. 공용체의 멤버 변수들은 한 번에 하나만 사용될 수 있다.
- i 변수와 d 변수는 메모리를 공유하여 사용하기 때문에 13번째 줄에서 i를 0으로 초기화해도 17번째 줄에서 5.5가 출력된다. 14번째 줄에서 d에 대입한 5.5가 i 변수와 중첩되어 사용되고 있기 때문이다.
- d에 대입하는 것은 i에 영향을 주며, i에 값을 대입하면, d 값이 영향을 받는다.
*/