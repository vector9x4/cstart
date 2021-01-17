#include <stdio.h>

int main(void)
{
	float d;	// 실수형 변수 float을 사용. float형 변수의 범위는 1.2E-38~3.4E38이다.
	double d1;	// 실수형 변수 double형을 사용. double형 변수의 범위는 2.2E-308~1.8E308이다.
	double d2;	// 실수형 값을 다룰 때는 일반적으로 double을 많이 사용한다.

	d = 3.141592;
	d1 = 1234567890;
	d2 = 'c';

	printf("실수형 변수 d의 값은 %E\n", d);
	printf("실수형 변수 d1의 값은 %E\n", d1);
	printf("실수형 변수 d2의 값은 %E\n", d2);
}

/*
실수형 변수는 다른 일반 변수형과 달리 정밀도라는 것을 가지고 있다.
정밀도란 소수점 이하 몇 자리까지를 표시하는가를 나타내며, float형과 double형의 정밀도는 다음과 같다.
- float형 : 7자리
- double형 : 14자리
14자리가 넘어갈 때는 전부 0으로 처리한다.
*/