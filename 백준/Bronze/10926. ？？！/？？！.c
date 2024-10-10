#include <stdio.h>

int main(void)
{
    char username[51]; // 최대 50자까지 입력 가능하므로 배열 크기를 51로 설정
    
    scanf("%s", username); // 사용자에게 아이디를 입력받음

    printf("%s??!\n", username); // 아이디 뒤에 '??!'를 붙여서 출력

    return 0; // main() 함수의 모든 명령문을 수행한 후 0을 외부로 변환함
}