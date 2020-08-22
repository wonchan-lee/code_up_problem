#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c, answer;
    cin >> a >> b >> c;
    
    // 정답 자리에 다시 ? 연산자 실행 가능
    a < b? (a<c? answer=a:answer=c) : (b < c? answer=b : answer = c);  

    cout << answer;
}
