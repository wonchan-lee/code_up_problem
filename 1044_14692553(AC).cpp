#include<iostream>
#include<string>
using namespace std;

int main(){
    long x; // -2147483648~ 2147483647의범위를 넘는 건 long
    cin >> x;
    
    cout << ++x; // ++x 는 x에 x+1을 넣는 것
}
