#include <iostream>
#include <string>
#include <cmath> //필요한 라이브러리
using namespace std;

int main(){
    // goto문 익히기
    int x;
start_point:
    cin >> x;
    // ? 3항 연산자에서는 못쓰는듯?
    if(x != 0){ cout << x<<" "; goto start_point;}
}
