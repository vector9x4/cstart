#include <stdio.h>

int main(void)
{
	int i;	// int형 변수 i는 -2,147,483,648~+2,147,483,647 범위의 값을 저장할 수 있음
	unsigned int j;	// unsigned int형 변수 j는 0~4,294,967,295 범위의 값을 저장할 수 있음
	int k;

	i = 2000000000;
	j = 4000000000;
	k = 'b';	// int형 변수 k에 문자 'b'를 저장한다. 아스키 문자를 문자형 변수가 아닌 정수형 변수에도 대입할 수 있다.

	printf("정수형 변수 i의 값은 %d\n", i);
	printf("정수형 변수 j의 값은 %u\n", j);
	printf("정수형 변수 k의 값은 %d\n", k);
}

/*
정수형 변수는 int형 외에도 short형과 long형이 있다.
short : -32768 ~ +32767
unsigned short : 0 ~ + 65535
long : -2,147,483,648 ~ +2,147,483,647
unsigned long : 0 ~ 4,294,967,295

32비트 운영체제에서는 int와 long, 또는 unsigned int와 unsigned long과의 특별한 차이는 없다.
두 변수형 모두 4바이트 메모리를 사용하여 값을 저장하기 때문에 기호에 맞게 사용하면 된다.
보통 정수형 변수를 사용할 때는 int를 많이 이용한다.
*/