#include <iostream>
using namespace std;

int main(){
    float x;
    cin >>x;
    // float 소수점 6자리로 설정
    cout << fixed;
    cout.precision(6);
    //
    cout<<x;
}
