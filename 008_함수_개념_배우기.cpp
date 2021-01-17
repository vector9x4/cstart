#include <stdio.h> // 모든 함수는 선언을 해야 사용할 수 있다. printf()함수도 #include 문을 통해 선언되고 있다.

int hapf(int value); // hapf 함수를 먼저 선언한다.

int main(void)
{
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));
}

int hapf(int value) // int는 반환되는 값의 데이터형이 정수형이라는 것을 정의하는 것이고, hapf는 함수의 이름, int value는 정수형 값을 전달받아 사용하겠다는 의미이다.
{
	int i; 
	int hap = 0;

	for(i = 1; i <= value; i = i + 1)
	{
		hap = hap + i;
	}

	return hap;	// hapf() 함수에서 정수형 값을 반환하기 위해 사용하는 것. hapf(10) 등으로 호출한 곳에 hap의 값을 돌려준다.
}

/*
-함수의 특징-
함수는 이름을 갖는다. 프로그램에서는 이러한 함수 이름을 사용하여 함수의 코드를 사용할 수 있다.
함수는 또한 다른 함수 내에서도 호출될 수 있다.
함수는 독립적이다. 다른 부분과 영향을 주고받지 않고 주어진 동작을 수행한다.
함수는 특정 동작을 수행한다. 함수가 수행하는 동작은 프로그램의 전체적인 동작을 구성하는 일부분이자, 독립된 작업 내용이다.
함수 내의 문장은 필요할 때마다 호출한 프로그램으로 결과를 전달할 수 있다. 즉, 함수는 호출한 프로그램으로 결과 값을 돌려줄 수 있다.
모든 함수의 선언부에는 세미콜론이 있고, 실행 부분에서는 세미콜론이 없다.
모든 함수는 반환값을 하나만 가짐
*/
