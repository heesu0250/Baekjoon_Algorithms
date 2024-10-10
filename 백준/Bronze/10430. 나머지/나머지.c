#include <stdio.h>
int main(void)
{
    int a, b, c; // 3개의 정수형 변수 정의
    scanf("%d %d %d", &a, &b, &c); // 입력받은 세 정수를 변수에 차례대로 저장
    printf("%d\n", (a+b)%c); // (a+b)%c 값 출력
    printf("%d\n", ((a%c)+(b%c))%c); // ((a%c)+(b%c))%c 값 출력
    printf("%d\n", (a*b)%c); // (a*b)%c 값 출력
    printf("%d\n", ((a%c)*(b%c))%c); // ((a%c)*(b%c))%c 값 출력
    return 0; // main() 함수의 모든 명령문을 수행한 후 0을 외부로 변환함
}