#include <iostream>
#include <string>
using namespace std;

int main(){
    char rate;
    cin >> rate;
    // switch문 구현
    // ()안에는 정수가 들어가야함
    switch(rate){
        case 'A':
         cout << "best!!!";
         break;
        case 'B':
         cout << "good!!";
         break;
        case 'C':
         cout << "run!";
         break;
        case 'D':
         cout << "slowly~";
         break;
        default:
         cout <<"what?";
    }
}
