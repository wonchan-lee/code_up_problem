#include<iostream>
#include<string>
using namespace std;

int main(){
    int some;
    int w, h, n;
    cin >> w >> h;
    cin >> n;
    
    //배열 크기는 상수여야한다. 배열 크기를 바꾸고 싶으면 벡터를 써라
    int table[101][101];
    //2차원 배열 초기화
    fill(table[0],table[0]+w*h, 0);
    int d[10]={0,};
    int l[10]={0,};
    int x[10]={0,};
    int y[10]={0,};


    for(int i=0; i<n; i++){
       cin >> l[i] >> d[i] >> x[i] >> y[i];
    }
    
    for(int i=0; i<n; i++){
        if (d[i]==1){
            for(int j=0; j<l[i]; j++){
                table[x[i]-1][y[i]-1]=1;
                x[i]++;
            
            }
        }
        else{
            for(int j=0; j<l[i]; j++){
                table[x[i]-1][y[i]-1]=1;
                y[i]++;
            }
        }
    }
    
    for(int i=0; i<w; i++){
       for(int j=0; j<h; j++){
        cout << table[i][j]<<' ';
       }
        cout << '\n';
    }
    
}
