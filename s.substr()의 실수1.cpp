#include <iostream>
#include <string>
using namespace std;

int main(){
    int index;
    string x,y,s; 
    cin >>s;
    
    index= s.find('-',0);
    x=s.substr(0,index); // substr을 받을 때는 string으로 받는다.
    y=s.substr(index+1); // substr을 받을 때는 string으로 받는다.
    
    cout<<x+y;
}
