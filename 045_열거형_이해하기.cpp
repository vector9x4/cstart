#include <stdio.h>

enum {Sun=0, Mon, Tue, Wed, Thr, Fri, Sat};	// 열거형 상수를 정의한다. 초기값을 설정하지 않을 경우 Sun의 값은 자동으로 0이 된다.

int main()
{
	printf("%d", Sun);	// 0 : 열거형 상수의 값을 각각 출력한다.  출력 결과는 0~6이다. 초기값을 다르게 설정하면 그 후부터 1씩 증가된다. 중간에 다른 값을 설정할 수도 있다.
	printf("%d", Mon);	// 1
	printf("%d", Tue);	// 2
	printf("%d", Wed);	// 3
	printf("%d", Thr);	// 4
	printf("%d", Fri);	// 5
	printf("%d", Sat);	// 6
}

/*
- 열거형은 상수를 나열하는 것과 같은 효과가 있다.
- 열거형은 일정한 순서를 가진 정수형 상수를 만드는데 유용하게 사용된다.
*/