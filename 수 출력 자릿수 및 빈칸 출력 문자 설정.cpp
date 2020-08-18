#include <iostream>
#include <string>
#include <iomanip> //추가된 라이브러리
using namespace std;

int main(){
    int x,y,z;
    scanf("%d.%d.%d",&x, &y, &z);
    
    // 데이터 출력 시마다 갱신    
    cout.width(4); // 출력 자릿수 설정
    cout.fill('0');  // 빈칸 문자 출력
    cout << x<<".";
    
    cout.width(2); // 출력 자릿수 설정
    cout.fill('0');  // 빈칸 문자 출력
    cout <<y<<".";
    

    cout.width(2); // 출력 자릿수 설정
    cout.fill('0');  // 빈칸 문자 출력
    cout <<z; 
}
