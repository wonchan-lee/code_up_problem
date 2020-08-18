#include <iostream>
using namespace std;

int main(){
    float x;
    cin >>x;
    // float 소수점 6자리로 설정
    cout << fixed; // 이게 소수점 자리의 숫자 범위를 정해라라는 뜻인듯
    cout.precision(6);
    // 이건 계속 소수점 6자리로 출력
    cout<<x;
}
