#include <iostream>
#include <string>
using namespace std;

int main(){
    int month;
    
    cin >> month;
    //switch문의 활용
    switch(month){
        case 12:
        case 1:
        case 2:
        cout << "winter";
        break;
        case 3:
        case 4:
        case 5:
        cout << "spring";
        break;
        case 6:
        case 7:
        case 8:
        cout << "summer";
        break;
        default:
        cout << "fall";
    }
}
