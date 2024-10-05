#include <iostream>
#include <iomanip> // 소수점 자릿수를 설정하기 위해 필요
using namespace std;

int main() {
    int A, B;

    // 사용자로부터 두 정수를 입력받음
    cin >> A >> B;

    // 나눗셈 결과를 출력 (소수점 9자리까지 출력)
    cout << fixed << setprecision(9) << (double)A / B << endl;

    return 0; // 프로그램 정상 종료
}