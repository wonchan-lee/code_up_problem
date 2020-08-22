#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    // c++에서는 ' '는 char형이다.
    a%2 == 0? cout << "even" <<'\n': cout << "odd"<<'\n';
    b%2 == 0? cout << "even" <<'\n': cout << "odd"<<'\n';
    c%2 == 0? cout << "even" <<'\n': cout << "odd"<<'\n';
}
