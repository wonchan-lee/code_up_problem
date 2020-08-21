#include<iostream>
#include<string>
using namespace std;

int main(){
    int x, y;
    cin >> x >>y;
    // 2진수의 각 자릿수의 and연산
    int z = x&y; 
    // 따로 이렇게 담아서 출력해야댐
    cout << z; 
}
