#include <iostream>
using namespace std;

int main(){
    float x;
    cin >>x;
    // float 소수점 6자리로 설정
    cout << fixed;
    cout.precision(6);
    // 이건 계속 소수점 6자리로 출력
    cout<<x;
}
