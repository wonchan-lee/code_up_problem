#include<iostream>
#include<string>
using namespace std;

int main(){
    //배열 초기화 하는 법
    int table[19][19]={0,};
    int n, x ,y;
    cin >> n;
    
    

    
    for(int i=0; i<n; i++){
        cin >> x >> y;
        table[x-1][y-1] = 1;
    }
    
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout << table[i][j]<<' ';
        }
        cout << '\n';
    }
}
