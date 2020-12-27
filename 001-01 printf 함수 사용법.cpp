/* 출력 데이터에 따른 printf 함수의 사용법 */
#include <stdio.h>

int main(void)
{
	printf("Hello World"); // 화면에 Hello World 출력 (문자열)
	printf("Hello World\n"); // Hello World 출력 후 줄 바꿈 (제어 문자)
	printf("%d", 10); // 화면에 정수 "10" 출력 (정수)
	printf("%f", 3.5); // 화면에 실수 "3.5000000" 출력 (실수)
	printf("%d", 10 + 20); // 10과 20일 더한 결과인 "30" 출력 (수식)
}

