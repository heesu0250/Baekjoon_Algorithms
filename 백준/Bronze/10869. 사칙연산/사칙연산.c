#include <stdio.h>

int main(void)
{
    int A, B; // 두 자연수를 저장할 변수 선언

    scanf("%d %d", &A, &B); // 사용자에게 두 자연수 입력받음

    printf("%d\n", A + B); // A + B 출력
    printf("%d\n", A - B); // A - B 출력
    printf("%d\n", A * B); // A * B 출력
    printf("%d\n", A / B); // A / B (몫) 출력
    printf("%d\n", A % B); // A % B (나머지) 출력

    return 0; // main() 함수의 모든 명령문을 수행한 후 0을 외부로 변환함
}