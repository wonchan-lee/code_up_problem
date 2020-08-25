#include<iostream>
#include<string>
using namespace std;

int main(){
    int day1, day2, day3;
    cin >> day1 >> day2 >> day3;
    //출력할 날짜
    int day = 1;
    //3개 모두 0이 될 때가 0(거짓)이어야하니 POS형으로 
    while((day%day1 !=0)||(day%day2!=0)||(day%day3!=0)){
        day++;
    }
    cout << day;
    
    
}
