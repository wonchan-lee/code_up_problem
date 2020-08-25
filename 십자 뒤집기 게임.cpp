#include<iostream>
#include<string>
using namespace std;

int main(){
    //제시된 좌표 상황 불러오기
    int table[19][19];
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cin >> table[i][j];
        }
    }
    
    //+로 뒤집을 좌표 받고 저장
    int n;
    cin >>n;
    int x[n];
    int y[n];
    for(int i=0; i<n; i++){
        //뒤집을 좌표 저장하고
        cin >> x[i] >> y[i];
        //행 뒤집기
        for(int j=0; j<19; j++){
            if (table[x[i]-1][j]==0) table[x[i]-1][j]=1;
            else table[x[i]-1][j] = 0;
        }
        //열 뒤집기
        for(int j=0; j<19; j++){
            if (table[j][y[i]-1]==0) table[j][y[i]-1]=1;
            else table[j][y[i]-1] = 0;
        }
    }
    
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout << table[i][j]<< ' ';
        }
        cout << '\n';
    }
    

    
}
