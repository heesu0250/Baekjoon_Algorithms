#include <stdio.h>

int main(void)
{
    int x, y; // 서기연도 x 불기연도 y 변수 정의
    scanf("%d", &y); // 불기연도 입력 받아서 변수 y에 저장
    x = y - 543; // 서기연도 계산하여 변수 x에 저장
    printf("%d", x); // 서기연도 출력
    return 0; // main() 함수의 모든 명령문을 수행한 후 0을 외부로 변환함
}