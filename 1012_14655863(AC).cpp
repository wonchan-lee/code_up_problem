#include <iostream>
using namespace std;

int main(){
    float x;
    cin >>x;
    // float 소수점 6자리로 설정
    cout << fixed;
    cout.precision(6);
    // 이것도 데이터 출력 때마다 갱신해야하나?
    cout<<x;
}
