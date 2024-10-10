#include <stdio.h>
int main(void)
{
    long long a, b, c; // 세 개의 정수형 변수 정의
    scanf("%lld %lld %lld", &a, &b, &c); // 입력받은 세 정수를 변수에 차례대로 저장
    printf("%lld", a+b+c); // a+b+c 값 출력
    return 0; // 함수의 모든 명령문을 수행한 후 0을 외부로 변환함
}