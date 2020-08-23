#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    cin >> hex >> x;
    
    for (int i=1; i<=15 ; i++){
        cout << uppercase <<hex <<x <<"*"<<i<<"=";
        cout << uppercase <<hex <<x*i<<'\n';
    }
}
