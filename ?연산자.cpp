#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    //3항 연산자 조건문? 참일 때 실행 : 거짓일 때 실행
    a > b ? c=a : c=b;
    cout << c;
}
