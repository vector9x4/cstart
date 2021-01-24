#include <stdio.h>

int main()
{
	int x = 1;
	int y = 2;
	int z;
	int zz;

	z = x + y;

	zz = printf("z의 값 : %d\n", z);	// printf() 함수는 실행 결과로써 몇 바이트를 출력했는지를 반환한다. 이처럼 함수의 반환값을 변수에 대입할 수 있다.
	printf("zz의 값 : %d\n", zz);	// 12번째 줄에서 printf()함수에 의해 12바이트가 출력된다. 
}

/*
- 대입 연산자는 기호로 등호를 사용하며, 대입 연산자의 오른쪽에 위치한 값 또는 결과를 왼쪽 변수에 대입해주는 역할을 한다.
- 대입 연산자의 왼쪽에 올 수 있는 값을 L-Value라고 하며, 일반적인 변수들은 모두 L-Value가 될 수 있다.
- 대입 연산자는 값이 변할 수 있는 특정 변수에 어떤 값을 대입하고자 할 때 사용한다.
- 조건절에서 사용하는 연산자(==)와 헷갈리지 않게 주의하기!! if(i==1)대신 if(1==i)라고 쓰기도 한다.
*/
